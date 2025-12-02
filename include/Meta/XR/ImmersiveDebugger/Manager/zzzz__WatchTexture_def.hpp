#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Manager/WatchTexture.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__Watch_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WatchTexture)
namespace Meta::XR::ImmersiveDebugger::Manager {
class WatchTexture___c__DisplayClass0_0;
}
namespace Meta::XR::ImmersiveDebugger::Utils {
struct InstanceHandle;
}
namespace Meta::XR::ImmersiveDebugger {
class DebugMember;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Manager {
class WatchTexture;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class WatchTexture___c__DisplayClass0_0;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Manager::WatchTexture);
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Manager::WatchTexture___c__DisplayClass0_0);
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::Manager {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Manager.WatchTexture/<>c__DisplayClass0_0
class CORDL_TYPE WatchTexture___c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Meta::XR::ImmersiveDebugger::Manager::WatchTexture* __4__this;

  /// @brief Field memberInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_memberInfo, put = __cordl_internal_set_memberInfo)) ::System::Reflection::MemberInfo* memberInfo;

  static inline ::Meta::XR::ImmersiveDebugger::Manager::WatchTexture___c__DisplayClass0_0* New_ctor();

  constexpr ::Meta::XR::ImmersiveDebugger::Manager::WatchTexture* const& __cordl_internal_get___4__this() const;

  constexpr ::Meta::XR::ImmersiveDebugger::Manager::WatchTexture*& __cordl_internal_get___4__this();

  constexpr ::System::Reflection::MemberInfo* const& __cordl_internal_get_memberInfo() const;

  constexpr ::System::Reflection::MemberInfo*& __cordl_internal_get_memberInfo();

  constexpr void __cordl_internal_set___4__this(::Meta::XR::ImmersiveDebugger::Manager::WatchTexture* value);

  constexpr void __cordl_internal_set_memberInfo(::System::Reflection::MemberInfo* value);

  /// @brief Method <.ctor>b__0, addr 0x5850af0, size 0x78, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> __ctor_b__0();

  /// @brief Method .ctor, addr 0x5850a38, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WatchTexture___c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WatchTexture___c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WatchTexture___c__DisplayClass0_0(WatchTexture___c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WatchTexture___c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WatchTexture___c__DisplayClass0_0(WatchTexture___c__DisplayClass0_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18402 };

  /// @brief Field memberInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::MemberInfo* ___memberInfo;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::Manager::WatchTexture* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::WatchTexture___c__DisplayClass0_0, ___memberInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::WatchTexture___c__DisplayClass0_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Manager::WatchTexture___c__DisplayClass0_0, 0x20>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Manager
// Dependencies Meta.XR.ImmersiveDebugger.Manager.Watch
namespace Meta::XR::ImmersiveDebugger::Manager {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Manager.WatchTexture
class CORDL_TYPE WatchTexture : public ::Meta::XR::ImmersiveDebugger::Manager::Watch {
public:
  // Declarations
  using __c__DisplayClass0_0 = ::Meta::XR::ImmersiveDebugger::Manager::WatchTexture___c__DisplayClass0_0;

  __declspec(property(get = get_NumberOfValues)) int32_t NumberOfValues;

  __declspec(property(get = get_Texture)) ::UnityW<::UnityEngine::Texture2D> Texture;

  __declspec(property(get = get_Value)) ::StringW Value;

  __declspec(property(get = get_Values)) ::ArrayW<::StringW, ::Array<::StringW>*> Values;

  /// @brief Field _getter, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__getter, put = __cordl_internal_set__getter)) ::System::Func_1<::UnityW<::UnityEngine::Texture2D>>* _getter;

  static inline ::Meta::XR::ImmersiveDebugger::Manager::WatchTexture* New_ctor(::System::Reflection::MemberInfo* memberInfo, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle,
                                                                               ::Meta::XR::ImmersiveDebugger::DebugMember* attribute);

  constexpr ::System::Func_1<::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get__getter() const;

  constexpr ::System::Func_1<::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get__getter();

  constexpr void __cordl_internal_set__getter(::System::Func_1<::UnityW<::UnityEngine::Texture2D>>* value);

  /// @brief Method .ctor, addr 0x5850918, size 0x120, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MemberInfo* memberInfo, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle, ::Meta::XR::ImmersiveDebugger::DebugMember* attribute);

  /// @brief Method get_NumberOfValues, addr 0x5850ae8, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_NumberOfValues();

  /// @brief Method get_Texture, addr 0x584689c, size 0x20, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> get_Texture();

  /// @brief Method get_Value, addr 0x5850a3c, size 0x14, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method get_Values, addr 0x5850a50, size 0x98, virtual true, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_Values();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WatchTexture();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WatchTexture", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WatchTexture(WatchTexture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WatchTexture", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WatchTexture(WatchTexture const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18403 };

  /// @brief Field _getter, offset: 0x40, size: 0x8, def value: None
  ::System::Func_1<::UnityW<::UnityEngine::Texture2D>>* ____getter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::WatchTexture, ____getter) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Manager::WatchTexture, 0x48>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Manager
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Manager::WatchTexture);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Manager::WatchTexture*, "Meta.XR.ImmersiveDebugger.Manager", "WatchTexture");
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Manager::WatchTexture___c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Manager::WatchTexture___c__DisplayClass0_0*, "Meta.XR.ImmersiveDebugger.Manager", "WatchTexture/<>c__DisplayClass0_0");
