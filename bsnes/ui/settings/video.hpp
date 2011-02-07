struct VideoSettings : TopLevelWindow {
  FixedLayout layout;
  Label colorAdjustmentLabel;
  Label brightnessLabel;
  Label brightnessValue;
  HorizontalSlider brightnessSlider;
  Label contrastLabel;
  Label contrastValue;
  HorizontalSlider contrastSlider;
  Label gammaLabel;
  Label gammaValue;
  HorizontalSlider gammaSlider;
  CheckBox gammaRampCheck;

  Label fullscreenLabel;
  RadioBox fullscreenCenter;
  RadioBox fullscreenScale;
  RadioBox fullscreenStretch;

  Label filterLabel;
  TextBox filterPath;
  Button filterClear;
  Button filterSelect;

  Label shaderLabel;
  TextBox shaderPath;
  Button shaderClear;
  Button shaderSelect;

  void create();
  void adjust();
};

extern VideoSettings videoSettings;