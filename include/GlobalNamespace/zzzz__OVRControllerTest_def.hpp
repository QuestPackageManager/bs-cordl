#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRControllerTest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OVRControllerTest)
namespace GlobalNamespace {
class BoolMonitor_OVRControllerTest_BoolGenerator;
}
namespace GlobalNamespace {
class OVRControllerTest_BoolMonitor;
}
namespace GlobalNamespace {
class OVRControllerTest___c;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace GlobalNamespace {
class BoolMonitor_OVRControllerTest_BoolGenerator;
}
namespace GlobalNamespace {
class OVRControllerTest;
}
namespace GlobalNamespace {
class OVRControllerTest_BoolMonitor;
}
namespace GlobalNamespace {
class OVRControllerTest___c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator);
MARK_REF_PTR_T(::GlobalNamespace::OVRControllerTest);
MARK_REF_PTR_T(::GlobalNamespace::OVRControllerTest_BoolMonitor);
MARK_REF_PTR_T(::GlobalNamespace::OVRControllerTest___c);
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRControllerTest/BoolMonitor/BoolGenerator
class CORDL_TYPE BoolMonitor_OVRControllerTest_BoolGenerator : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x403b11c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x403b13c, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x403b108, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x403b080, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BoolMonitor_OVRControllerTest_BoolGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BoolMonitor_OVRControllerTest_BoolGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BoolMonitor_OVRControllerTest_BoolGenerator(BoolMonitor_OVRControllerTest_BoolGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BoolMonitor_OVRControllerTest_BoolGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BoolMonitor_OVRControllerTest_BoolGenerator(BoolMonitor_OVRControllerTest_BoolGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8397 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRControllerTest/BoolMonitor
class CORDL_TYPE OVRControllerTest_BoolMonitor : public ::System::Object {
public:
  // Declarations
  using BoolGenerator = ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator;

  /// @brief Field m_currentValue, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_m_currentValue, put = __cordl_internal_set_m_currentValue)) bool m_currentValue;

  /// @brief Field m_currentValueRecentlyChanged, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get_m_currentValueRecentlyChanged, put = __cordl_internal_set_m_currentValueRecentlyChanged)) bool m_currentValueRecentlyChanged;

  /// @brief Field m_displayTimeout, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_displayTimeout, put = __cordl_internal_set_m_displayTimeout)) float_t m_displayTimeout;

  /// @brief Field m_displayTimer, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_displayTimer, put = __cordl_internal_set_m_displayTimer)) float_t m_displayTimer;

  /// @brief Field m_generator, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_generator, put = __cordl_internal_set_m_generator)) ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* m_generator;

  /// @brief Field m_name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_name, put = __cordl_internal_set_m_name)) ::StringW m_name;

  /// @brief Field m_prevValue, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_prevValue, put = __cordl_internal_set_m_prevValue)) bool m_prevValue;

  /// @brief Method AppendToStringBuilder, addr 0x403afac, size 0xd4, virtual false, abstract: false, final false
  inline void AppendToStringBuilder(::ByRef<::System::Text::StringBuilder*> sb);

  static inline ::GlobalNamespace::OVRControllerTest_BoolMonitor* New_ctor(::StringW name, ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* generator, float_t displayTimeout);

  /// @brief Method Update, addr 0x403af1c, size 0x90, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get_m_currentValue() const;

  constexpr bool& __cordl_internal_get_m_currentValue();

  constexpr bool const& __cordl_internal_get_m_currentValueRecentlyChanged() const;

  constexpr bool& __cordl_internal_get_m_currentValueRecentlyChanged();

  constexpr float_t const& __cordl_internal_get_m_displayTimeout() const;

  constexpr float_t& __cordl_internal_get_m_displayTimeout();

  constexpr float_t const& __cordl_internal_get_m_displayTimer() const;

  constexpr float_t& __cordl_internal_get_m_displayTimer();

  constexpr ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* const& __cordl_internal_get_m_generator() const;

  constexpr ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*& __cordl_internal_get_m_generator();

  constexpr ::StringW const& __cordl_internal_get_m_name() const;

  constexpr ::StringW& __cordl_internal_get_m_name();

  constexpr bool const& __cordl_internal_get_m_prevValue() const;

  constexpr bool& __cordl_internal_get_m_prevValue();

  constexpr void __cordl_internal_set_m_currentValue(bool value);

  constexpr void __cordl_internal_set_m_currentValueRecentlyChanged(bool value);

  constexpr void __cordl_internal_set_m_displayTimeout(float_t value);

  constexpr void __cordl_internal_set_m_displayTimer(float_t value);

  constexpr void __cordl_internal_set_m_generator(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value);

  constexpr void __cordl_internal_set_m_name(::StringW value);

  constexpr void __cordl_internal_set_m_prevValue(bool value);

  /// @brief Method .ctor, addr 0x403aea4, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* generator, float_t displayTimeout);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRControllerTest_BoolMonitor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRControllerTest_BoolMonitor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRControllerTest_BoolMonitor(OVRControllerTest_BoolMonitor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRControllerTest_BoolMonitor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRControllerTest_BoolMonitor(OVRControllerTest_BoolMonitor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8398 };

  /// @brief Field m_name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_name;

  /// @brief Field m_generator, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* ___m_generator;

  /// @brief Field m_prevValue, offset: 0x20, size: 0x1, def value: None
  bool ___m_prevValue;

  /// @brief Field m_currentValue, offset: 0x21, size: 0x1, def value: None
  bool ___m_currentValue;

  /// @brief Field m_currentValueRecentlyChanged, offset: 0x22, size: 0x1, def value: None
  bool ___m_currentValueRecentlyChanged;

  /// @brief Field m_displayTimeout, offset: 0x24, size: 0x4, def value: None
  float_t ___m_displayTimeout;

  /// @brief Field m_displayTimer, offset: 0x28, size: 0x4, def value: None
  float_t ___m_displayTimer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRControllerTest_BoolMonitor, ___m_name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerTest_BoolMonitor, ___m_generator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerTest_BoolMonitor, ___m_prevValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerTest_BoolMonitor, ___m_currentValue) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerTest_BoolMonitor, ___m_currentValueRecentlyChanged) == 0x22, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerTest_BoolMonitor, ___m_displayTimeout) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerTest_BoolMonitor, ___m_displayTimer) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRControllerTest_BoolMonitor, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRControllerTest/<>c
class CORDL_TYPE OVRControllerTest___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::OVRControllerTest___c* __9;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_0, put = setStaticF___9__4_0)) ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* __9__4_0;

  /// @brief Field <>9__4_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_1, put = setStaticF___9__4_1)) ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* __9__4_1;

  /// @brief Field <>9__4_10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_10, put = setStaticF___9__4_10)) ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* __9__4_10;

  /// @brief Field <>9__4_11, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_11, put = setStaticF___9__4_11)) ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* __9__4_11;

  /// @brief Field <>9__4_12, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_12, put = setStaticF___9__4_12)) ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* __9__4_12;

  /// @brief Field <>9__4_13, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_13, put = setStaticF___9__4_13)) ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* __9__4_13;

  /// @brief Field <>9__4_14, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_14, put = setStaticF___9__4_14)) ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* __9__4_14;

  /// @brief Field <>9__4_15, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_15, put = setStaticF___9__4_15)) ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* __9__4_15;

  /// @brief Field <>9__4_16, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_16, put = setStaticF___9__4_16)) ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* __9__4_16;

  /// @brief Field <>9__4_17, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_17, put = setStaticF___9__4_17)) ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* __9__4_17;

  /// @brief Field <>9__4_18, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_18, put = setStaticF___9__4_18)) ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* __9__4_18;

  /// @brief Field <>9__4_19, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_19, put = setStaticF___9__4_19)) ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* __9__4_19;

  /// @brief Field <>9__4_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_2, put = setStaticF___9__4_2)) ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* __9__4_2;

  /// @brief Field <>9__4_20, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_20, put = setStaticF___9__4_20)) ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* __9__4_20;

  /// @brief Field <>9__4_21, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_21, put = setStaticF___9__4_21)) ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* __9__4_21;

  /// @brief Field <>9__4_22, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_22, put = setStaticF___9__4_22)) ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* __9__4_22;

  /// @brief Field <>9__4_23, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_23, put = setStaticF___9__4_23)) ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* __9__4_23;

  /// @brief Field <>9__4_24, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_24, put = setStaticF___9__4_24)) ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* __9__4_24;

  /// @brief Field <>9__4_25, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_25, put = setStaticF___9__4_25)) ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* __9__4_25;

  /// @brief Field <>9__4_26, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_26, put = setStaticF___9__4_26)) ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* __9__4_26;

  /// @brief Field <>9__4_27, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_27, put = setStaticF___9__4_27)) ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* __9__4_27;

  /// @brief Field <>9__4_28, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_28, put = setStaticF___9__4_28)) ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* __9__4_28;

  /// @brief Field <>9__4_29, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_29, put = setStaticF___9__4_29)) ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* __9__4_29;

  /// @brief Field <>9__4_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_3, put = setStaticF___9__4_3)) ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* __9__4_3;

  /// @brief Field <>9__4_30, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_30, put = setStaticF___9__4_30)) ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* __9__4_30;

  /// @brief Field <>9__4_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_4, put = setStaticF___9__4_4)) ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* __9__4_4;

  /// @brief Field <>9__4_5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_5, put = setStaticF___9__4_5)) ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* __9__4_5;

  /// @brief Field <>9__4_6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_6, put = setStaticF___9__4_6)) ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* __9__4_6;

  /// @brief Field <>9__4_7, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_7, put = setStaticF___9__4_7)) ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* __9__4_7;

  /// @brief Field <>9__4_8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_8, put = setStaticF___9__4_8)) ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* __9__4_8;

  /// @brief Field <>9__4_9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_9, put = setStaticF___9__4_9)) ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* __9__4_9;

  static inline ::GlobalNamespace::OVRControllerTest___c* New_ctor();

  /// @brief Method <Start>b__4_0, addr 0x403b1c8, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_0();

  /// @brief Method <Start>b__4_1, addr 0x403b220, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_1();

  /// @brief Method <Start>b__4_10, addr 0x403b538, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_10();

  /// @brief Method <Start>b__4_11, addr 0x403b590, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_11();

  /// @brief Method <Start>b__4_12, addr 0x403b5e8, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_12();

  /// @brief Method <Start>b__4_13, addr 0x403b640, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_13();

  /// @brief Method <Start>b__4_14, addr 0x403b698, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_14();

  /// @brief Method <Start>b__4_15, addr 0x403b6f0, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_15();

  /// @brief Method <Start>b__4_16, addr 0x403b748, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_16();

  /// @brief Method <Start>b__4_17, addr 0x403b7a0, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_17();

  /// @brief Method <Start>b__4_18, addr 0x403b7f8, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_18();

  /// @brief Method <Start>b__4_19, addr 0x403b850, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_19();

  /// @brief Method <Start>b__4_2, addr 0x403b278, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_2();

  /// @brief Method <Start>b__4_20, addr 0x403b8a8, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_20();

  /// @brief Method <Start>b__4_21, addr 0x403b900, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_21();

  /// @brief Method <Start>b__4_22, addr 0x403b958, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_22();

  /// @brief Method <Start>b__4_23, addr 0x403b9b0, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_23();

  /// @brief Method <Start>b__4_24, addr 0x403ba08, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_24();

  /// @brief Method <Start>b__4_25, addr 0x403ba60, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_25();

  /// @brief Method <Start>b__4_26, addr 0x403bab8, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_26();

  /// @brief Method <Start>b__4_27, addr 0x403bb10, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_27();

  /// @brief Method <Start>b__4_28, addr 0x403bb68, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_28();

  /// @brief Method <Start>b__4_29, addr 0x403bbc0, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_29();

  /// @brief Method <Start>b__4_3, addr 0x403b2d0, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_3();

  /// @brief Method <Start>b__4_30, addr 0x403bc18, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_30();

  /// @brief Method <Start>b__4_4, addr 0x403b328, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_4();

  /// @brief Method <Start>b__4_5, addr 0x403b380, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_5();

  /// @brief Method <Start>b__4_6, addr 0x403b3d8, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_6();

  /// @brief Method <Start>b__4_7, addr 0x403b430, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_7();

  /// @brief Method <Start>b__4_8, addr 0x403b488, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_8();

  /// @brief Method <Start>b__4_9, addr 0x403b4e0, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_9();

  /// @brief Method <.cctor>b__9_0, addr 0x403bc70, size 0x108, virtual false, abstract: false, final false
  inline bool __cctor_b__9_0();

  /// @brief Method .ctor, addr 0x403b1c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::OVRControllerTest___c* getStaticF___9();

  static inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* getStaticF___9__4_0();

  static inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* getStaticF___9__4_1();

  static inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* getStaticF___9__4_10();

  static inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* getStaticF___9__4_11();

  static inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* getStaticF___9__4_12();

  static inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* getStaticF___9__4_13();

  static inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* getStaticF___9__4_14();

  static inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* getStaticF___9__4_15();

  static inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* getStaticF___9__4_16();

  static inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* getStaticF___9__4_17();

  static inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* getStaticF___9__4_18();

  static inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* getStaticF___9__4_19();

  static inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* getStaticF___9__4_2();

  static inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* getStaticF___9__4_20();

  static inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* getStaticF___9__4_21();

  static inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* getStaticF___9__4_22();

  static inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* getStaticF___9__4_23();

  static inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* getStaticF___9__4_24();

  static inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* getStaticF___9__4_25();

  static inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* getStaticF___9__4_26();

  static inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* getStaticF___9__4_27();

  static inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* getStaticF___9__4_28();

  static inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* getStaticF___9__4_29();

  static inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* getStaticF___9__4_3();

  static inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* getStaticF___9__4_30();

  static inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* getStaticF___9__4_4();

  static inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* getStaticF___9__4_5();

  static inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* getStaticF___9__4_6();

  static inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* getStaticF___9__4_7();

  static inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* getStaticF___9__4_8();

  static inline ::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* getStaticF___9__4_9();

  static inline void setStaticF___9(::GlobalNamespace::OVRControllerTest___c* value);

  static inline void setStaticF___9__4_0(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value);

  static inline void setStaticF___9__4_1(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value);

  static inline void setStaticF___9__4_10(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value);

  static inline void setStaticF___9__4_11(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value);

  static inline void setStaticF___9__4_12(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value);

  static inline void setStaticF___9__4_13(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value);

  static inline void setStaticF___9__4_14(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value);

  static inline void setStaticF___9__4_15(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value);

  static inline void setStaticF___9__4_16(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value);

  static inline void setStaticF___9__4_17(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value);

  static inline void setStaticF___9__4_18(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value);

  static inline void setStaticF___9__4_19(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value);

  static inline void setStaticF___9__4_2(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value);

  static inline void setStaticF___9__4_20(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value);

  static inline void setStaticF___9__4_21(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value);

  static inline void setStaticF___9__4_22(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value);

  static inline void setStaticF___9__4_23(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value);

  static inline void setStaticF___9__4_24(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value);

  static inline void setStaticF___9__4_25(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value);

  static inline void setStaticF___9__4_26(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value);

  static inline void setStaticF___9__4_27(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value);

  static inline void setStaticF___9__4_28(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value);

  static inline void setStaticF___9__4_29(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value);

  static inline void setStaticF___9__4_3(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value);

  static inline void setStaticF___9__4_30(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value);

  static inline void setStaticF___9__4_4(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value);

  static inline void setStaticF___9__4_5(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value);

  static inline void setStaticF___9__4_6(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value);

  static inline void setStaticF___9__4_7(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value);

  static inline void setStaticF___9__4_8(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value);

  static inline void setStaticF___9__4_9(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRControllerTest___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRControllerTest___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRControllerTest___c(OVRControllerTest___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRControllerTest___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRControllerTest___c(OVRControllerTest___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8399 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRControllerTest___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRControllerTest
class CORDL_TYPE OVRControllerTest : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using BoolMonitor = ::GlobalNamespace::OVRControllerTest_BoolMonitor;

  using __c = ::GlobalNamespace::OVRControllerTest___c;

  /// @brief Field controllers, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_controllers, put = setStaticF_controllers)) ::GlobalNamespace::OVRControllerTest_BoolMonitor* controllers;

  /// @brief Field data, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::System::Text::StringBuilder* data;

  /// @brief Field monitors, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_monitors, put = __cordl_internal_set_monitors)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRControllerTest_BoolMonitor*>* monitors;

  /// @brief Field prevConnected, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_prevConnected, put = setStaticF_prevConnected)) ::StringW prevConnected;

  /// @brief Field uiText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_uiText, put = __cordl_internal_set_uiText)) ::UnityW<::UnityEngine::UI::Text> uiText;

  static inline ::GlobalNamespace::OVRControllerTest* New_ctor();

  /// @brief Method Start, addr 0x4038334, size 0x2160, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x403a494, size 0x8d0, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_data() const;

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get_data();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRControllerTest_BoolMonitor*>* const& __cordl_internal_get_monitors() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRControllerTest_BoolMonitor*>*& __cordl_internal_get_monitors();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_uiText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_uiText();

  constexpr void __cordl_internal_set_data(::System::Text::StringBuilder* value);

  constexpr void __cordl_internal_set_monitors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRControllerTest_BoolMonitor*>* value);

  constexpr void __cordl_internal_set_uiText(::UnityW<::UnityEngine::UI::Text> value);

  /// @brief Method .ctor, addr 0x403ad64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::OVRControllerTest_BoolMonitor* getStaticF_controllers();

  static inline ::StringW getStaticF_prevConnected();

  static inline void setStaticF_controllers(::GlobalNamespace::OVRControllerTest_BoolMonitor* value);

  static inline void setStaticF_prevConnected(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRControllerTest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRControllerTest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRControllerTest(OVRControllerTest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRControllerTest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRControllerTest(OVRControllerTest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8400 };

  /// @brief Field uiText, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___uiText;

  /// @brief Field monitors, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::OVRControllerTest_BoolMonitor*>* ___monitors;

  /// @brief Field data, offset: 0x30, size: 0x8, def value: None
  ::System::Text::StringBuilder* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRControllerTest, ___uiText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerTest, ___monitors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerTest, ___data) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRControllerTest, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BoolMonitor_OVRControllerTest_BoolGenerator*, "", "OVRControllerTest/BoolMonitor/BoolGenerator");
NEED_NO_BOX(::GlobalNamespace::OVRControllerTest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRControllerTest*, "", "OVRControllerTest");
NEED_NO_BOX(::GlobalNamespace::OVRControllerTest_BoolMonitor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRControllerTest_BoolMonitor*, "", "OVRControllerTest/BoolMonitor");
NEED_NO_BOX(::GlobalNamespace::OVRControllerTest___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRControllerTest___c*, "", "OVRControllerTest/<>c");
