#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/PlatformInit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__BBPlatformInitStatus_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Shared/zzzz__PlatformInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlatformInit)
namespace Meta::XR::MultiplayerBlocks::Shared {
struct BBPlatformInitStatus;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
struct PlatformInfo;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class PlatformInit___c__DisplayClass5_0;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class PlatformInit___c__DisplayClass5_1;
}
namespace Oculus::Platform::Models {
class PlatformInitialize;
}
namespace Oculus::Platform::Models {
class User;
}
namespace Oculus::Platform {
template <typename T> class Message_1;
}
namespace Oculus::Platform {
class Message;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Shared {
class PlatformInit;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class PlatformInit___c__DisplayClass5_0;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class PlatformInit___c__DisplayClass5_1;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Shared::PlatformInit);
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0);
MARK_REF_PTR_T(::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_1);
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.PlatformInit/<>c__DisplayClass5_0
class CORDL_TYPE PlatformInit___c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::Action_1<::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo>* callback;

  static inline ::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0* New_ctor();

  /// @brief Method <GetEntitlementInformation>g__CheckEntitlement|1, addr 0x58c9df4, size 0x234, virtual false, abstract: false, final false
  inline void _GetEntitlementInformation_g__CheckEntitlement_1(::Oculus::Platform::Message* msg);

  /// @brief Method <GetEntitlementInformation>g__GetAccessTokenComplete|2, addr 0x58ca028, size 0x2d8, virtual false, abstract: false, final false
  inline void _GetEntitlementInformation_g__GetAccessTokenComplete_2(::Oculus::Platform::Message_1<::StringW>* msg);

  /// @brief Method <GetEntitlementInformation>g__InitializeComplete|0, addr 0x58c9c00, size 0x1f4, virtual false, abstract: false, final false
  inline void _GetEntitlementInformation_g__InitializeComplete_0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>* msg);

  constexpr ::System::Action_1<::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo>* const& __cordl_internal_get_callback() const;

  constexpr ::System::Action_1<::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo>*& __cordl_internal_get_callback();

  constexpr void __cordl_internal_set_callback(::System::Action_1<::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo>* value);

  /// @brief Method .ctor, addr 0x58c9bfc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformInit___c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformInit___c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformInit___c__DisplayClass5_0(PlatformInit___c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformInit___c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformInit___c__DisplayClass5_0(PlatformInit___c__DisplayClass5_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20378 };

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo>* ___callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0, ___callback) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0, 0x18>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
// Dependencies System.Object
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.PlatformInit/<>c__DisplayClass5_1
class CORDL_TYPE PlatformInit___c__DisplayClass5_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1,
                      put = __cordl_internal_set_CS$__8__locals1)) ::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0* CS$__8__locals1;

  /// @brief Field accessToken, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_accessToken, put = __cordl_internal_set_accessToken)) ::StringW accessToken;

  static inline ::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_1* New_ctor();

  /// @brief Method <GetEntitlementInformation>b__3, addr 0x58ca304, size 0x214, virtual false, abstract: false, final false
  inline void _GetEntitlementInformation_b__3(::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>* msg);

  constexpr ::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0* const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::StringW const& __cordl_internal_get_accessToken() const;

  constexpr ::StringW& __cordl_internal_get_accessToken();

  constexpr void __cordl_internal_set_CS$__8__locals1(::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0* value);

  constexpr void __cordl_internal_set_accessToken(::StringW value);

  /// @brief Method .ctor, addr 0x58ca300, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformInit___c__DisplayClass5_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformInit___c__DisplayClass5_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformInit___c__DisplayClass5_1(PlatformInit___c__DisplayClass5_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformInit___c__DisplayClass5_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformInit___c__DisplayClass5_1(PlatformInit___c__DisplayClass5_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20379 };

  /// @brief Field accessToken, offset: 0x10, size: 0x8, def value: None
  ::StringW ___accessToken;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_1, ___accessToken) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_1, 0x20>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
// Dependencies Meta.XR.MultiplayerBlocks.Shared.BBPlatformInitStatus, Meta.XR.MultiplayerBlocks.Shared.PlatformInfo, System.Object
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.PlatformInit
class CORDL_TYPE PlatformInit : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass5_0 = ::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0;

  using __c__DisplayClass5_1 = ::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_1;

  /// @brief Field _info, offset 0xffffffff, size 0x18
  __declspec(property(get = getStaticF__info, put = setStaticF__info)) ::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo _info;

  /// @brief Field <status>k__BackingField, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__status_k__BackingField, put = setStaticF__status_k__BackingField)) ::Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus _status_k__BackingField;

  /// @brief Method GetEntitlementInformation, addr 0x58c537c, size 0x360, virtual false, abstract: false, final false
  static inline void GetEntitlementInformation(::System::Action_1<::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo>* callback);

  static inline ::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo getStaticF__info();

  static inline ::Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus getStaticF__status_k__BackingField();

  /// @brief Method get_status, addr 0x58c9b60, size 0x4c, virtual false, abstract: false, final false
  static inline ::Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus get_status();

  static inline void setStaticF__info(::Meta::XR::MultiplayerBlocks::Shared::PlatformInfo value);

  static inline void setStaticF__status_k__BackingField(::Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus value);

  /// @brief Method set_status, addr 0x58c9bac, size 0x50, virtual false, abstract: false, final false
  static inline void set_status(::Meta::XR::MultiplayerBlocks::Shared::BBPlatformInitStatus value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformInit();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformInit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformInit(PlatformInit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformInit(PlatformInit const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20380 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::MultiplayerBlocks::Shared::PlatformInit, 0x10>, "Size mismatch!");

} // namespace Meta::XR::MultiplayerBlocks::Shared
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Shared::PlatformInit);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::PlatformInit*, "Meta.XR.MultiplayerBlocks.Shared", "PlatformInit");
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_0*, "Meta.XR.MultiplayerBlocks.Shared", "PlatformInit/<>c__DisplayClass5_0");
NEED_NO_BOX(::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_1);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MultiplayerBlocks::Shared::PlatformInit___c__DisplayClass5_1*, "Meta.XR.MultiplayerBlocks.Shared", "PlatformInit/<>c__DisplayClass5_1");
