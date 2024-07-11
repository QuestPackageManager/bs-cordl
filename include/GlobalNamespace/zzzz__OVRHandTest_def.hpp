#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRHandTest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRHandTest)
namespace GlobalNamespace {
class __OVRHandTest__BoolMonitor;
}
namespace GlobalNamespace {
class __OVRHandTest__BoolMonitor__BoolGenerator;
}
namespace GlobalNamespace {
class __OVRHandTest____c;
}
namespace GlobalNamespace {
class __OVRPlugin__Mesh;
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
class OVRHandTest;
}
namespace GlobalNamespace {
class __OVRHandTest__BoolMonitor;
}
namespace GlobalNamespace {
class __OVRHandTest__BoolMonitor__BoolGenerator;
}
namespace GlobalNamespace {
class __OVRHandTest____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRHandTest);
MARK_REF_PTR_T(::GlobalNamespace::__OVRHandTest__BoolMonitor);
MARK_REF_PTR_T(::GlobalNamespace::__OVRHandTest__BoolMonitor__BoolGenerator);
MARK_REF_PTR_T(::GlobalNamespace::__OVRHandTest____c);
// Type: ::BoolGenerator
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRHandTest::BoolMonitor::BoolGenerator*
class CORDL_TYPE __OVRHandTest__BoolMonitor__BoolGenerator : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bb9574, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bb9594, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bb9560, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::GlobalNamespace::__OVRHandTest__BoolMonitor__BoolGenerator* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bb8508, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRHandTest__BoolMonitor__BoolGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRHandTest__BoolMonitor__BoolGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRHandTest__BoolMonitor__BoolGenerator(__OVRHandTest__BoolMonitor__BoolGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRHandTest__BoolMonitor__BoolGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRHandTest__BoolMonitor__BoolGenerator(__OVRHandTest__BoolMonitor__BoolGenerator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRHandTest__BoolMonitor__BoolGenerator, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BoolMonitor
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRHandTest::BoolMonitor*
class CORDL_TYPE __OVRHandTest__BoolMonitor : public ::System::Object {
public:
  // Declarations
  using BoolGenerator = ::GlobalNamespace::__OVRHandTest__BoolMonitor__BoolGenerator;

  /// @brief Field m_currentValue, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_m_currentValue, put = __cordl_internal_set_m_currentValue)) bool m_currentValue;

  /// @brief Field m_currentValueRecentlyChanged, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get_m_currentValueRecentlyChanged, put = __cordl_internal_set_m_currentValueRecentlyChanged)) bool m_currentValueRecentlyChanged;

  /// @brief Field m_displayTimeout, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_displayTimeout, put = __cordl_internal_set_m_displayTimeout)) float_t m_displayTimeout;

  /// @brief Field m_displayTimer, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_displayTimer, put = __cordl_internal_set_m_displayTimer)) float_t m_displayTimer;

  /// @brief Field m_generator, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_generator, put = __cordl_internal_set_m_generator))::GlobalNamespace::__OVRHandTest__BoolMonitor__BoolGenerator* m_generator;

  /// @brief Field m_name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_name, put = __cordl_internal_set_m_name))::StringW m_name;

  /// @brief Field m_prevValue, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_prevValue, put = __cordl_internal_set_m_prevValue)) bool m_prevValue;

  /// @brief Method AppendToStringBuilder, addr 0x2bb92d4, size 0xd4, virtual false, abstract: false, final false
  inline void AppendToStringBuilder(ByRef<::System::Text::StringBuilder*> sb);

  static inline ::GlobalNamespace::__OVRHandTest__BoolMonitor* New_ctor(::StringW name, ::GlobalNamespace::__OVRHandTest__BoolMonitor__BoolGenerator* generator, float_t displayTimeout);

  /// @brief Method Update, addr 0x2bb9240, size 0x94, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get_m_currentValue() const;

  constexpr bool& __cordl_internal_get_m_currentValue();

  constexpr bool const& __cordl_internal_get_m_currentValueRecentlyChanged() const;

  constexpr bool& __cordl_internal_get_m_currentValueRecentlyChanged();

  constexpr float_t const& __cordl_internal_get_m_displayTimeout() const;

  constexpr float_t& __cordl_internal_get_m_displayTimeout();

  constexpr float_t const& __cordl_internal_get_m_displayTimer() const;

  constexpr float_t& __cordl_internal_get_m_displayTimer();

  constexpr ::GlobalNamespace::__OVRHandTest__BoolMonitor__BoolGenerator*& __cordl_internal_get_m_generator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRHandTest__BoolMonitor__BoolGenerator*> const& __cordl_internal_get_m_generator() const;

  constexpr ::StringW const& __cordl_internal_get_m_name() const;

  constexpr ::StringW& __cordl_internal_get_m_name();

  constexpr bool const& __cordl_internal_get_m_prevValue() const;

  constexpr bool& __cordl_internal_get_m_prevValue();

  constexpr void __cordl_internal_set_m_currentValue(bool value);

  constexpr void __cordl_internal_set_m_currentValueRecentlyChanged(bool value);

  constexpr void __cordl_internal_set_m_displayTimeout(float_t value);

  constexpr void __cordl_internal_set_m_displayTimer(float_t value);

  constexpr void __cordl_internal_set_m_generator(::GlobalNamespace::__OVRHandTest__BoolMonitor__BoolGenerator* value);

  constexpr void __cordl_internal_set_m_name(::StringW value);

  constexpr void __cordl_internal_set_m_prevValue(bool value);

  /// @brief Method .ctor, addr 0x2bb85c4, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::GlobalNamespace::__OVRHandTest__BoolMonitor__BoolGenerator* generator, float_t displayTimeout);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRHandTest__BoolMonitor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRHandTest__BoolMonitor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRHandTest__BoolMonitor(__OVRHandTest__BoolMonitor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRHandTest__BoolMonitor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRHandTest__BoolMonitor(__OVRHandTest__BoolMonitor const&) = delete;

  /// @brief Field m_name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_name;

  /// @brief Field m_generator, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__OVRHandTest__BoolMonitor__BoolGenerator* ___m_generator;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRHandTest__BoolMonitor, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRHandTest__BoolMonitor, ___m_name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRHandTest__BoolMonitor, ___m_generator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRHandTest__BoolMonitor, ___m_prevValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRHandTest__BoolMonitor, ___m_currentValue) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRHandTest__BoolMonitor, ___m_currentValueRecentlyChanged) == 0x22, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRHandTest__BoolMonitor, ___m_displayTimeout) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRHandTest__BoolMonitor, ___m_displayTimer) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRHandTest::<>c*
class CORDL_TYPE __OVRHandTest____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__OVRHandTest____c* __9;

  /// @brief Field <>9__14_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__14_0, put = setStaticF___9__14_0))::GlobalNamespace::__OVRHandTest__BoolMonitor__BoolGenerator* __9__14_0;

  static inline ::GlobalNamespace::__OVRHandTest____c* New_ctor();

  /// @brief Method <Start>b__14_0, addr 0x2bb9628, size 0x58, virtual false, abstract: false, final false
  inline bool _Start_b__14_0();

  /// @brief Method <.cctor>b__19_0, addr 0x2bb9680, size 0x108, virtual false, abstract: false, final false
  inline bool __cctor_b__19_0();

  /// @brief Method .ctor, addr 0x2bb9620, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__OVRHandTest____c* getStaticF___9();

  static inline ::GlobalNamespace::__OVRHandTest__BoolMonitor__BoolGenerator* getStaticF___9__14_0();

  static inline void setStaticF___9(::GlobalNamespace::__OVRHandTest____c* value);

  static inline void setStaticF___9__14_0(::GlobalNamespace::__OVRHandTest__BoolMonitor__BoolGenerator* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRHandTest____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRHandTest____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRHandTest____c(__OVRHandTest____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRHandTest____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRHandTest____c(__OVRHandTest____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRHandTest____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRHandTest
// SizeInfo { instance_size: 376, native_size: -1, calculated_instance_size: 376, calculated_native_size: 372, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRHandTest*
class CORDL_TYPE OVRHandTest : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using BoolMonitor = ::GlobalNamespace::__OVRHandTest__BoolMonitor;

  using __c = ::GlobalNamespace::__OVRHandTest____c;

  /// @brief Field controllers, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_controllers, put = setStaticF_controllers))::GlobalNamespace::__OVRHandTest__BoolMonitor* controllers;

  /// @brief Field data, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data))::System::Text::StringBuilder* data;

  /// @brief Field hs_LH, offset 0x30, size 0x78
  __declspec(property(get = __cordl_internal_get_hs_LH, put = __cordl_internal_set_hs_LH))::GlobalNamespace::__OVRPlugin__HandState hs_LH;

  /// @brief Field hs_RH, offset 0xa8, size 0x78
  __declspec(property(get = __cordl_internal_get_hs_RH, put = __cordl_internal_set_hs_RH))::GlobalNamespace::__OVRPlugin__HandState hs_RH;

  /// @brief Field mesh_LH, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get_mesh_LH, put = __cordl_internal_set_mesh_LH))::GlobalNamespace::__OVRPlugin__Mesh* mesh_LH;

  /// @brief Field mesh_RH, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get_mesh_RH, put = __cordl_internal_set_mesh_RH))::GlobalNamespace::__OVRPlugin__Mesh* mesh_RH;

  /// @brief Field monitors, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_monitors, put = __cordl_internal_set_monitors))::System::Collections::Generic::List_1<::GlobalNamespace::__OVRHandTest__BoolMonitor*>* monitors;

  /// @brief Field prevConnected, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_prevConnected, put = setStaticF_prevConnected))::StringW prevConnected;

  /// @brief Field result_mesh_LH, offset 0x172, size 0x1
  __declspec(property(get = __cordl_internal_get_result_mesh_LH, put = __cordl_internal_set_result_mesh_LH)) bool result_mesh_LH;

  /// @brief Field result_mesh_RH, offset 0x173, size 0x1
  __declspec(property(get = __cordl_internal_get_result_mesh_RH, put = __cordl_internal_set_result_mesh_RH)) bool result_mesh_RH;

  /// @brief Field result_skel_LH, offset 0x170, size 0x1
  __declspec(property(get = __cordl_internal_get_result_skel_LH, put = __cordl_internal_set_result_skel_LH)) bool result_skel_LH;

  /// @brief Field result_skel_RH, offset 0x171, size 0x1
  __declspec(property(get = __cordl_internal_get_result_skel_RH, put = __cordl_internal_set_result_skel_RH)) bool result_skel_RH;

  /// @brief Field skel_LH, offset 0x120, size 0x20
  __declspec(property(get = __cordl_internal_get_skel_LH, put = __cordl_internal_set_skel_LH))::GlobalNamespace::__OVRPlugin__Skeleton skel_LH;

  /// @brief Field skel_RH, offset 0x140, size 0x20
  __declspec(property(get = __cordl_internal_get_skel_RH, put = __cordl_internal_set_skel_RH))::GlobalNamespace::__OVRPlugin__Skeleton skel_RH;

  /// @brief Field uiText, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_uiText, put = __cordl_internal_set_uiText))::UnityW<::UnityEngine::UI::Text> uiText;

  static inline ::GlobalNamespace::OVRHandTest* New_ctor();

  /// @brief Method Start, addr 0x2bb8224, size 0x2e4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x2bb863c, size 0xc04, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get_data();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __cordl_internal_get_data() const;

  constexpr ::GlobalNamespace::__OVRPlugin__HandState const& __cordl_internal_get_hs_LH() const;

  constexpr ::GlobalNamespace::__OVRPlugin__HandState& __cordl_internal_get_hs_LH();

  constexpr ::GlobalNamespace::__OVRPlugin__HandState const& __cordl_internal_get_hs_RH() const;

  constexpr ::GlobalNamespace::__OVRPlugin__HandState& __cordl_internal_get_hs_RH();

  constexpr ::GlobalNamespace::__OVRPlugin__Mesh*& __cordl_internal_get_mesh_LH();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRPlugin__Mesh*> const& __cordl_internal_get_mesh_LH() const;

  constexpr ::GlobalNamespace::__OVRPlugin__Mesh*& __cordl_internal_get_mesh_RH();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRPlugin__Mesh*> const& __cordl_internal_get_mesh_RH() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRHandTest__BoolMonitor*>*& __cordl_internal_get_monitors();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRHandTest__BoolMonitor*>*> const& __cordl_internal_get_monitors() const;

  constexpr bool const& __cordl_internal_get_result_mesh_LH() const;

  constexpr bool& __cordl_internal_get_result_mesh_LH();

  constexpr bool const& __cordl_internal_get_result_mesh_RH() const;

  constexpr bool& __cordl_internal_get_result_mesh_RH();

  constexpr bool const& __cordl_internal_get_result_skel_LH() const;

  constexpr bool& __cordl_internal_get_result_skel_LH();

  constexpr bool const& __cordl_internal_get_result_skel_RH() const;

  constexpr bool& __cordl_internal_get_result_skel_RH();

  constexpr ::GlobalNamespace::__OVRPlugin__Skeleton const& __cordl_internal_get_skel_LH() const;

  constexpr ::GlobalNamespace::__OVRPlugin__Skeleton& __cordl_internal_get_skel_LH();

  constexpr ::GlobalNamespace::__OVRPlugin__Skeleton const& __cordl_internal_get_skel_RH() const;

  constexpr ::GlobalNamespace::__OVRPlugin__Skeleton& __cordl_internal_get_skel_RH();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_uiText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_uiText();

  constexpr void __cordl_internal_set_data(::System::Text::StringBuilder* value);

  constexpr void __cordl_internal_set_hs_LH(::GlobalNamespace::__OVRPlugin__HandState value);

  constexpr void __cordl_internal_set_hs_RH(::GlobalNamespace::__OVRPlugin__HandState value);

  constexpr void __cordl_internal_set_mesh_LH(::GlobalNamespace::__OVRPlugin__Mesh* value);

  constexpr void __cordl_internal_set_mesh_RH(::GlobalNamespace::__OVRPlugin__Mesh* value);

  constexpr void __cordl_internal_set_monitors(::System::Collections::Generic::List_1<::GlobalNamespace::__OVRHandTest__BoolMonitor*>* value);

  constexpr void __cordl_internal_set_result_mesh_LH(bool value);

  constexpr void __cordl_internal_set_result_mesh_RH(bool value);

  constexpr void __cordl_internal_set_result_skel_LH(bool value);

  constexpr void __cordl_internal_set_result_skel_RH(bool value);

  constexpr void __cordl_internal_set_skel_LH(::GlobalNamespace::__OVRPlugin__Skeleton value);

  constexpr void __cordl_internal_set_skel_RH(::GlobalNamespace::__OVRPlugin__Skeleton value);

  constexpr void __cordl_internal_set_uiText(::UnityW<::UnityEngine::UI::Text> value);

  /// @brief Method .ctor, addr 0x2bb93a8, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__OVRHandTest__BoolMonitor* getStaticF_controllers();

  static inline ::StringW getStaticF_prevConnected();

  static inline void setStaticF_controllers(::GlobalNamespace::__OVRHandTest__BoolMonitor* value);

  static inline void setStaticF_prevConnected(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRHandTest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRHandTest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRHandTest(OVRHandTest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRHandTest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRHandTest(OVRHandTest const&) = delete;

  /// @brief Field uiText, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___uiText;

  /// @brief Field monitors, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRHandTest__BoolMonitor*>* ___monitors;

  /// @brief Field data, offset: 0x28, size: 0x8, def value: None
  ::System::Text::StringBuilder* ___data;

  /// @brief Field hs_LH, offset: 0x30, size: 0x78, def value: None
  ::GlobalNamespace::__OVRPlugin__HandState ___hs_LH;

  /// @brief Field hs_RH, offset: 0xa8, size: 0x78, def value: None
  ::GlobalNamespace::__OVRPlugin__HandState ___hs_RH;

  /// @brief Field skel_LH, offset: 0x120, size: 0x20, def value: None
  ::GlobalNamespace::__OVRPlugin__Skeleton ___skel_LH;

  /// @brief Field skel_RH, offset: 0x140, size: 0x20, def value: None
  ::GlobalNamespace::__OVRPlugin__Skeleton ___skel_RH;

  /// @brief Field mesh_LH, offset: 0x160, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__Mesh* ___mesh_LH;

  /// @brief Field mesh_RH, offset: 0x168, size: 0x8, def value: None
  ::GlobalNamespace::__OVRPlugin__Mesh* ___mesh_RH;

  /// @brief Field result_skel_LH, offset: 0x170, size: 0x1, def value: None
  bool ___result_skel_LH;

  /// @brief Field result_skel_RH, offset: 0x171, size: 0x1, def value: None
  bool ___result_skel_RH;

  /// @brief Field result_mesh_LH, offset: 0x172, size: 0x1, def value: None
  bool ___result_mesh_LH;

  /// @brief Field result_mesh_RH, offset: 0x173, size: 0x1, def value: None
  bool ___result_mesh_RH;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRHandTest, 0x178>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHandTest, ___uiText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHandTest, ___monitors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHandTest, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHandTest, ___hs_LH) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHandTest, ___hs_RH) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHandTest, ___skel_LH) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHandTest, ___skel_RH) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHandTest, ___mesh_LH) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHandTest, ___mesh_RH) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHandTest, ___result_skel_LH) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHandTest, ___result_skel_RH) == 0x171, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHandTest, ___result_mesh_LH) == 0x172, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRHandTest, ___result_mesh_RH) == 0x173, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRHandTest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHandTest*, "", "OVRHandTest");
NEED_NO_BOX(::GlobalNamespace::__OVRHandTest__BoolMonitor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRHandTest__BoolMonitor*, "", "OVRHandTest/BoolMonitor");
NEED_NO_BOX(::GlobalNamespace::__OVRHandTest__BoolMonitor__BoolGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRHandTest__BoolMonitor__BoolGenerator*, "", "OVRHandTest/BoolMonitor/BoolGenerator");
NEED_NO_BOX(::GlobalNamespace::__OVRHandTest____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRHandTest____c*, "", "OVRHandTest/<>c");
