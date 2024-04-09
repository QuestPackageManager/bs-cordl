#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRControllerTest)
namespace GlobalNamespace {
class __OVRControllerTest__BoolMonitor;
}
namespace GlobalNamespace {
class __OVRControllerTest__BoolMonitor__BoolGenerator;
}
namespace GlobalNamespace {
class __OVRControllerTest____c;
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
class Object;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRControllerTest;
}
namespace GlobalNamespace {
class __OVRControllerTest__BoolMonitor;
}
namespace GlobalNamespace {
class __OVRControllerTest__BoolMonitor__BoolGenerator;
}
namespace GlobalNamespace {
class __OVRControllerTest____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRControllerTest);
MARK_REF_PTR_T(::GlobalNamespace::__OVRControllerTest__BoolMonitor);
MARK_REF_PTR_T(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator);
MARK_REF_PTR_T(::GlobalNamespace::__OVRControllerTest____c);
// Type: ::BoolGenerator
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRControllerTest::BoolMonitor::BoolGenerator*
class CORDL_TYPE __OVRControllerTest__BoolMonitor__BoolGenerator : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a7c6d0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a7c6f0, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a7c6bc, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a7c600, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRControllerTest__BoolMonitor__BoolGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRControllerTest__BoolMonitor__BoolGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRControllerTest__BoolMonitor__BoolGenerator(__OVRControllerTest__BoolMonitor__BoolGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRControllerTest__BoolMonitor__BoolGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRControllerTest__BoolMonitor__BoolGenerator(__OVRControllerTest__BoolMonitor__BoolGenerator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BoolMonitor
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRControllerTest::BoolMonitor*
class CORDL_TYPE __OVRControllerTest__BoolMonitor : public ::System::Object {
public:
  // Declarations
  using BoolGenerator = ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator;

  /// @brief Field m_currentValue, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_m_currentValue, put = __cordl_internal_set_m_currentValue)) bool m_currentValue;

  /// @brief Field m_currentValueRecentlyChanged, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get_m_currentValueRecentlyChanged, put = __cordl_internal_set_m_currentValueRecentlyChanged)) bool m_currentValueRecentlyChanged;

  /// @brief Field m_displayTimeout, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_displayTimeout, put = __cordl_internal_set_m_displayTimeout)) float_t m_displayTimeout;

  /// @brief Field m_displayTimer, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_displayTimer, put = __cordl_internal_set_m_displayTimer)) float_t m_displayTimer;

  /// @brief Field m_generator, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_generator, put = __cordl_internal_set_m_generator))::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* m_generator;

  /// @brief Field m_name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_name, put = __cordl_internal_set_m_name))::StringW m_name;

  /// @brief Field m_prevValue, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_prevValue, put = __cordl_internal_set_m_prevValue)) bool m_prevValue;

  /// @brief Method AppendToStringBuilder, addr 0x2a7c52c, size 0xd4, virtual false, abstract: false, final false
  inline void AppendToStringBuilder(ByRef<::System::Text::StringBuilder*> sb);

  static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor* New_ctor(::StringW name, ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* generator, float_t displayTimeout);

  /// @brief Method Update, addr 0x2a7c498, size 0x94, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get_m_currentValue() const;

  constexpr bool& __cordl_internal_get_m_currentValue();

  constexpr bool const& __cordl_internal_get_m_currentValueRecentlyChanged() const;

  constexpr bool& __cordl_internal_get_m_currentValueRecentlyChanged();

  constexpr float_t const& __cordl_internal_get_m_displayTimeout() const;

  constexpr float_t& __cordl_internal_get_m_displayTimeout();

  constexpr float_t const& __cordl_internal_get_m_displayTimer() const;

  constexpr float_t& __cordl_internal_get_m_displayTimer();

  constexpr ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*& __cordl_internal_get_m_generator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*> const& __cordl_internal_get_m_generator() const;

  constexpr ::StringW const& __cordl_internal_get_m_name() const;

  constexpr ::StringW& __cordl_internal_get_m_name();

  constexpr bool const& __cordl_internal_get_m_prevValue() const;

  constexpr bool& __cordl_internal_get_m_prevValue();

  constexpr void __cordl_internal_set_m_currentValue(bool value);

  constexpr void __cordl_internal_set_m_currentValueRecentlyChanged(bool value);

  constexpr void __cordl_internal_set_m_displayTimeout(float_t value);

  constexpr void __cordl_internal_set_m_displayTimer(float_t value);

  constexpr void __cordl_internal_set_m_generator(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* value);

  constexpr void __cordl_internal_set_m_name(::StringW value);

  constexpr void __cordl_internal_set_m_prevValue(bool value);

  /// @brief Method .ctor, addr 0x2a7c420, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* generator, float_t displayTimeout);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRControllerTest__BoolMonitor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRControllerTest__BoolMonitor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRControllerTest__BoolMonitor(__OVRControllerTest__BoolMonitor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRControllerTest__BoolMonitor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRControllerTest__BoolMonitor(__OVRControllerTest__BoolMonitor const&) = delete;

  /// @brief Field m_name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_name;

  /// @brief Field m_generator, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* ___m_generator;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRControllerTest__BoolMonitor, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRControllerTest__BoolMonitor, ___m_name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRControllerTest__BoolMonitor, ___m_generator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRControllerTest__BoolMonitor, ___m_prevValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRControllerTest__BoolMonitor, ___m_currentValue) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRControllerTest__BoolMonitor, ___m_currentValueRecentlyChanged) == 0x22, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRControllerTest__BoolMonitor, ___m_displayTimeout) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRControllerTest__BoolMonitor, ___m_displayTimer) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRControllerTest::<>c*
class CORDL_TYPE __OVRControllerTest____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__OVRControllerTest____c* __9;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_0, put = setStaticF___9__4_0))::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* __9__4_0;

  /// @brief Field <>9__4_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_1, put = setStaticF___9__4_1))::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* __9__4_1;

  /// @brief Field <>9__4_10, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_10, put = setStaticF___9__4_10))::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* __9__4_10;

  /// @brief Field <>9__4_11, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_11, put = setStaticF___9__4_11))::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* __9__4_11;

  /// @brief Field <>9__4_12, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_12, put = setStaticF___9__4_12))::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* __9__4_12;

  /// @brief Field <>9__4_13, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_13, put = setStaticF___9__4_13))::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* __9__4_13;

  /// @brief Field <>9__4_14, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_14, put = setStaticF___9__4_14))::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* __9__4_14;

  /// @brief Field <>9__4_15, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_15, put = setStaticF___9__4_15))::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* __9__4_15;

  /// @brief Field <>9__4_16, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_16, put = setStaticF___9__4_16))::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* __9__4_16;

  /// @brief Field <>9__4_17, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_17, put = setStaticF___9__4_17))::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* __9__4_17;

  /// @brief Field <>9__4_18, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_18, put = setStaticF___9__4_18))::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* __9__4_18;

  /// @brief Field <>9__4_19, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_19, put = setStaticF___9__4_19))::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* __9__4_19;

  /// @brief Field <>9__4_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_2, put = setStaticF___9__4_2))::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* __9__4_2;

  /// @brief Field <>9__4_20, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_20, put = setStaticF___9__4_20))::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* __9__4_20;

  /// @brief Field <>9__4_21, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_21, put = setStaticF___9__4_21))::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* __9__4_21;

  /// @brief Field <>9__4_22, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_22, put = setStaticF___9__4_22))::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* __9__4_22;

  /// @brief Field <>9__4_23, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_23, put = setStaticF___9__4_23))::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* __9__4_23;

  /// @brief Field <>9__4_24, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_24, put = setStaticF___9__4_24))::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* __9__4_24;

  /// @brief Field <>9__4_25, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_25, put = setStaticF___9__4_25))::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* __9__4_25;

  /// @brief Field <>9__4_26, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_26, put = setStaticF___9__4_26))::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* __9__4_26;

  /// @brief Field <>9__4_27, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_27, put = setStaticF___9__4_27))::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* __9__4_27;

  /// @brief Field <>9__4_28, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_28, put = setStaticF___9__4_28))::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* __9__4_28;

  /// @brief Field <>9__4_29, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_29, put = setStaticF___9__4_29))::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* __9__4_29;

  /// @brief Field <>9__4_3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_3, put = setStaticF___9__4_3))::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* __9__4_3;

  /// @brief Field <>9__4_30, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_30, put = setStaticF___9__4_30))::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* __9__4_30;

  /// @brief Field <>9__4_4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_4, put = setStaticF___9__4_4))::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* __9__4_4;

  /// @brief Field <>9__4_5, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_5, put = setStaticF___9__4_5))::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* __9__4_5;

  /// @brief Field <>9__4_6, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_6, put = setStaticF___9__4_6))::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* __9__4_6;

  /// @brief Field <>9__4_7, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_7, put = setStaticF___9__4_7))::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* __9__4_7;

  /// @brief Field <>9__4_8, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_8, put = setStaticF___9__4_8))::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* __9__4_8;

  /// @brief Field <>9__4_9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_9, put = setStaticF___9__4_9))::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* __9__4_9;

  static inline ::GlobalNamespace::__OVRControllerTest____c* New_ctor();

  /// @brief Method <Start>b__4_0, addr 0x2a7c784, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_0();

  /// @brief Method <Start>b__4_1, addr 0x2a7c7dc, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_1();

  /// @brief Method <Start>b__4_10, addr 0x2a7caf4, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_10();

  /// @brief Method <Start>b__4_11, addr 0x2a7cb4c, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_11();

  /// @brief Method <Start>b__4_12, addr 0x2a7cba4, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_12();

  /// @brief Method <Start>b__4_13, addr 0x2a7cbfc, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_13();

  /// @brief Method <Start>b__4_14, addr 0x2a7cc54, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_14();

  /// @brief Method <Start>b__4_15, addr 0x2a7ccac, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_15();

  /// @brief Method <Start>b__4_16, addr 0x2a7cd04, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_16();

  /// @brief Method <Start>b__4_17, addr 0x2a7cd5c, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_17();

  /// @brief Method <Start>b__4_18, addr 0x2a7cdb4, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_18();

  /// @brief Method <Start>b__4_19, addr 0x2a7ce0c, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_19();

  /// @brief Method <Start>b__4_2, addr 0x2a7c834, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_2();

  /// @brief Method <Start>b__4_20, addr 0x2a7ce64, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_20();

  /// @brief Method <Start>b__4_21, addr 0x2a7cebc, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_21();

  /// @brief Method <Start>b__4_22, addr 0x2a7cf14, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_22();

  /// @brief Method <Start>b__4_23, addr 0x2a7cf6c, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_23();

  /// @brief Method <Start>b__4_24, addr 0x2a7cfc4, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_24();

  /// @brief Method <Start>b__4_25, addr 0x2a7d01c, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_25();

  /// @brief Method <Start>b__4_26, addr 0x2a7d074, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_26();

  /// @brief Method <Start>b__4_27, addr 0x2a7d0cc, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_27();

  /// @brief Method <Start>b__4_28, addr 0x2a7d124, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_28();

  /// @brief Method <Start>b__4_29, addr 0x2a7d17c, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_29();

  /// @brief Method <Start>b__4_3, addr 0x2a7c88c, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_3();

  /// @brief Method <Start>b__4_30, addr 0x2a7d1d4, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_30();

  /// @brief Method <Start>b__4_4, addr 0x2a7c8e4, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_4();

  /// @brief Method <Start>b__4_5, addr 0x2a7c93c, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_5();

  /// @brief Method <Start>b__4_6, addr 0x2a7c994, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_6();

  /// @brief Method <Start>b__4_7, addr 0x2a7c9ec, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_7();

  /// @brief Method <Start>b__4_8, addr 0x2a7ca44, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_8();

  /// @brief Method <Start>b__4_9, addr 0x2a7ca9c, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__4_9();

  /// @brief Method <.cctor>b__9_0, addr 0x2a7d22c, size 0x108, virtual false, abstract: false, final false
  inline bool __cctor_b__9_0();

  /// @brief Method .ctor, addr 0x2a7c77c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__OVRControllerTest____c* getStaticF___9();

  static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_0();

  static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_1();

  static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_10();

  static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_11();

  static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_12();

  static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_13();

  static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_14();

  static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_15();

  static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_16();

  static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_17();

  static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_18();

  static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_19();

  static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_2();

  static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_20();

  static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_21();

  static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_22();

  static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_23();

  static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_24();

  static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_25();

  static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_26();

  static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_27();

  static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_28();

  static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_29();

  static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_3();

  static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_30();

  static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_4();

  static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_5();

  static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_6();

  static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_7();

  static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_8();

  static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* getStaticF___9__4_9();

  static inline void setStaticF___9(::GlobalNamespace::__OVRControllerTest____c* value);

  static inline void setStaticF___9__4_0(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* value);

  static inline void setStaticF___9__4_1(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* value);

  static inline void setStaticF___9__4_10(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* value);

  static inline void setStaticF___9__4_11(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* value);

  static inline void setStaticF___9__4_12(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* value);

  static inline void setStaticF___9__4_13(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* value);

  static inline void setStaticF___9__4_14(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* value);

  static inline void setStaticF___9__4_15(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* value);

  static inline void setStaticF___9__4_16(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* value);

  static inline void setStaticF___9__4_17(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* value);

  static inline void setStaticF___9__4_18(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* value);

  static inline void setStaticF___9__4_19(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* value);

  static inline void setStaticF___9__4_2(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* value);

  static inline void setStaticF___9__4_20(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* value);

  static inline void setStaticF___9__4_21(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* value);

  static inline void setStaticF___9__4_22(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* value);

  static inline void setStaticF___9__4_23(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* value);

  static inline void setStaticF___9__4_24(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* value);

  static inline void setStaticF___9__4_25(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* value);

  static inline void setStaticF___9__4_26(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* value);

  static inline void setStaticF___9__4_27(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* value);

  static inline void setStaticF___9__4_28(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* value);

  static inline void setStaticF___9__4_29(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* value);

  static inline void setStaticF___9__4_3(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* value);

  static inline void setStaticF___9__4_30(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* value);

  static inline void setStaticF___9__4_4(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* value);

  static inline void setStaticF___9__4_5(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* value);

  static inline void setStaticF___9__4_6(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* value);

  static inline void setStaticF___9__4_7(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* value);

  static inline void setStaticF___9__4_8(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* value);

  static inline void setStaticF___9__4_9(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRControllerTest____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRControllerTest____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRControllerTest____c(__OVRControllerTest____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRControllerTest____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRControllerTest____c(__OVRControllerTest____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRControllerTest____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRControllerTest
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRControllerTest*
class CORDL_TYPE OVRControllerTest : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using BoolMonitor = ::GlobalNamespace::__OVRControllerTest__BoolMonitor;

  using __c = ::GlobalNamespace::__OVRControllerTest____c;

  /// @brief Field controllers, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_controllers, put = setStaticF_controllers))::GlobalNamespace::__OVRControllerTest__BoolMonitor* controllers;

  /// @brief Field data, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::System::Text::StringBuilder* data;

  /// @brief Field monitors, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_monitors, put = __cordl_internal_set_monitors))::System::Collections::Generic::List_1<::GlobalNamespace::__OVRControllerTest__BoolMonitor*>* monitors;

  /// @brief Field prevConnected, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_prevConnected, put = setStaticF_prevConnected))::StringW prevConnected;

  /// @brief Field uiText, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_uiText, put = __cordl_internal_set_uiText))::UnityW<::UnityEngine::UI::Text> uiText;

  static inline ::GlobalNamespace::OVRControllerTest* New_ctor();

  /// @brief Method Start, addr 0x2a78814, size 0x21f8, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x2a7aa0c, size 0x8d0, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get_data();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __cordl_internal_get_data() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRControllerTest__BoolMonitor*>*& __cordl_internal_get_monitors();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRControllerTest__BoolMonitor*>*> const& __cordl_internal_get_monitors() const;

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_uiText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_uiText();

  constexpr void __cordl_internal_set_data(::System::Text::StringBuilder* value);

  constexpr void __cordl_internal_set_monitors(::System::Collections::Generic::List_1<::GlobalNamespace::__OVRControllerTest__BoolMonitor*>* value);

  constexpr void __cordl_internal_set_uiText(::UnityW<::UnityEngine::UI::Text> value);

  /// @brief Method .ctor, addr 0x2a7b2dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__OVRControllerTest__BoolMonitor* getStaticF_controllers();

  static inline ::StringW getStaticF_prevConnected();

  static inline void setStaticF_controllers(::GlobalNamespace::__OVRControllerTest__BoolMonitor* value);

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

  /// @brief Field uiText, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___uiText;

  /// @brief Field monitors, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRControllerTest__BoolMonitor*>* ___monitors;

  /// @brief Field data, offset: 0x28, size: 0x8, def value: None
  ::System::Text::StringBuilder* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRControllerTest, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerTest, ___uiText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerTest, ___monitors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerTest, ___data) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRControllerTest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRControllerTest*, "", "OVRControllerTest");
NEED_NO_BOX(::GlobalNamespace::__OVRControllerTest__BoolMonitor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRControllerTest__BoolMonitor*, "", "OVRControllerTest/BoolMonitor");
NEED_NO_BOX(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRControllerTest__BoolMonitor__BoolGenerator*, "", "OVRControllerTest/BoolMonitor/BoolGenerator");
NEED_NO_BOX(::GlobalNamespace::__OVRControllerTest____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRControllerTest____c*, "", "OVRControllerTest/<>c");
