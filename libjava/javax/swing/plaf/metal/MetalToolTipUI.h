
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_metal_MetalToolTipUI__
#define __javax_swing_plaf_metal_MetalToolTipUI__

#pragma interface

#include <javax/swing/plaf/basic/BasicToolTipUI.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Color;
        class Dimension;
        class Font;
        class Graphics;
    }
  }
  namespace javax
  {
    namespace swing
    {
        class JComponent;
        class KeyStroke;
      namespace border
      {
          class Border;
      }
      namespace plaf
      {
          class ComponentUI;
        namespace metal
        {
            class MetalToolTipUI;
        }
      }
    }
  }
}

class javax::swing::plaf::metal::MetalToolTipUI : public ::javax::swing::plaf::basic::BasicToolTipUI
{

public:
  MetalToolTipUI();
  static ::javax::swing::plaf::ComponentUI * createUI(::javax::swing::JComponent *);
  virtual ::java::lang::String * getAcceleratorString();
  virtual void installUI(::javax::swing::JComponent *);
  virtual void uninstallUI(::javax::swing::JComponent *);
public: // actually protected
  virtual jboolean isAcceleratorHidden();
public:
  virtual ::java::awt::Dimension * getPreferredSize(::javax::swing::JComponent *);
  virtual void paint(::java::awt::Graphics *, ::javax::swing::JComponent *);
private:
  ::java::lang::String * fetchAcceleratorString(::javax::swing::JComponent *);
  ::java::lang::String * acceleratorToString(::javax::swing::KeyStroke *);
public:
  static const jint padSpaceBetweenStrings = 12;
private:
  static ::javax::swing::plaf::metal::MetalToolTipUI * instance;
  jboolean __attribute__((aligned(__alignof__( ::javax::swing::plaf::basic::BasicToolTipUI)))) isAcceleratorHidden__;
  ::java::lang::String * acceleratorString;
  ::java::lang::String * acceleratorDelimiter;
  ::java::awt::Font * acceleratorFont;
  ::java::awt::Color * acceleratorForeground;
  ::javax::swing::border::Border * activeBorder;
  ::javax::swing::border::Border * inactiveBorder;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_metal_MetalToolTipUI__
