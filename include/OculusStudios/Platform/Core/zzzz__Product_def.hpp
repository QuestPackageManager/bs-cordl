#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/Product.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/Platform/Core/zzzz__InstallStatus_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Product)
namespace OculusStudios::Platform::Core {
class IProductDefinition;
}
namespace OculusStudios::Platform::Core {
struct InstallStatus;
}
namespace OculusStudios::Platform::Core {
struct OwnershipRequirement;
}
namespace OculusStudios::Platform::Core {
class Product___c;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace OculusStudios::Platform::Core {
class Product;
}
namespace OculusStudios::Platform::Core {
class Product___c;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::Platform::Core::Product);
MARK_REF_PTR_T(::OculusStudios::Platform::Core::Product___c);
// Dependencies System.Object
namespace OculusStudios::Platform::Core {
// Is value type: false
// CS Name: OculusStudios.Platform.Core.Product/<>c
class CORDL_TYPE Product___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::OculusStudios::Platform::Core::Product___c* __9;

  /// @brief Field <>9__13_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__13_0, put = setStaticF___9__13_0)) ::System::Func_2<::OculusStudios::Platform::Core::Product*, bool>* __9__13_0;

  /// @brief Field <>9__13_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__13_1, put = setStaticF___9__13_1)) ::System::Func_2<::OculusStudios::Platform::Core::Product*, bool>* __9__13_1;

  static inline ::OculusStudios::Platform::Core::Product___c* New_ctor();

  /// @brief Method .ctor, addr 0x5d19388, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_owned>b__13_0, addr 0x5d1938c, size 0x14, virtual false, abstract: false, final false
  inline bool _get_owned_b__13_0(::OculusStudios::Platform::Core::Product* x);

  /// @brief Method <get_owned>b__13_1, addr 0x5d193a0, size 0x14, virtual false, abstract: false, final false
  inline bool _get_owned_b__13_1(::OculusStudios::Platform::Core::Product* x);

  static inline ::OculusStudios::Platform::Core::Product___c* getStaticF___9();

  static inline ::System::Func_2<::OculusStudios::Platform::Core::Product*, bool>* getStaticF___9__13_0();

  static inline ::System::Func_2<::OculusStudios::Platform::Core::Product*, bool>* getStaticF___9__13_1();

  static inline void setStaticF___9(::OculusStudios::Platform::Core::Product___c* value);

  static inline void setStaticF___9__13_0(::System::Func_2<::OculusStudios::Platform::Core::Product*, bool>* value);

  static inline void setStaticF___9__13_1(::System::Func_2<::OculusStudios::Platform::Core::Product*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Product___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Product___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Product___c(Product___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Product___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Product___c(Product___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22141 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OculusStudios::Platform::Core::Product___c, 0x10>, "Size mismatch!");

} // namespace OculusStudios::Platform::Core
// Dependencies OculusStudios.Platform.Core.InstallStatus, System.Object
namespace OculusStudios::Platform::Core {
// Is value type: false
// CS Name: OculusStudios.Platform.Core.Product
class CORDL_TYPE Product : public ::System::Object {
public:
  // Declarations
  using __c = ::OculusStudios::Platform::Core::Product___c;

  /// @brief Field _children, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__children, put = __cordl_internal_set__children)) ::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::Product*>* _children;

  /// @brief Field _definition, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__definition, put = __cordl_internal_set__definition)) ::OculusStudios::Platform::Core::IProductDefinition* _definition;

  /// @brief Field _selfOwned, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__selfOwned, put = __cordl_internal_set__selfOwned)) bool _selfOwned;

  __declspec(property(get = get_children)) ::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::Product*>* children;

  __declspec(property(get = get_definition)) ::OculusStudios::Platform::Core::IProductDefinition* definition;

  /// @brief Field dlcInstallStatus, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_dlcInstallStatus, put = __cordl_internal_set_dlcInstallStatus)) ::OculusStudios::Platform::Core::InstallStatus dlcInstallStatus;

  __declspec(property(get = get_id)) ::StringW id;

  /// @brief Field idForVendor, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_idForVendor, put = __cordl_internal_set_idForVendor)) ::StringW idForVendor;

  __declspec(property(get = get_owned)) bool owned;

  __declspec(property(get = get_ownershipRequirement)) ::OculusStudios::Platform::Core::OwnershipRequirement ownershipRequirement;

  static inline ::OculusStudios::Platform::Core::Product* New_ctor(::OculusStudios::Platform::Core::IProductDefinition* definition, ::StringW idForVendor,
                                                                   ::OculusStudios::Platform::Core::InstallStatus dlcInstallStatus, bool selfOwned);

  /// @brief Method SetChildren, addr 0x5d1932c, size 0x8, virtual false, abstract: false, final false
  inline void SetChildren(::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::Product*>* children);

  constexpr ::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::Product*>* const& __cordl_internal_get__children() const;

  constexpr ::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::Product*>*& __cordl_internal_get__children();

  constexpr ::OculusStudios::Platform::Core::IProductDefinition* const& __cordl_internal_get__definition() const;

  constexpr ::OculusStudios::Platform::Core::IProductDefinition*& __cordl_internal_get__definition();

  constexpr bool const& __cordl_internal_get__selfOwned() const;

  constexpr bool& __cordl_internal_get__selfOwned();

  constexpr ::OculusStudios::Platform::Core::InstallStatus const& __cordl_internal_get_dlcInstallStatus() const;

  constexpr ::OculusStudios::Platform::Core::InstallStatus& __cordl_internal_get_dlcInstallStatus();

  constexpr ::StringW const& __cordl_internal_get_idForVendor() const;

  constexpr ::StringW& __cordl_internal_get_idForVendor();

  constexpr void __cordl_internal_set__children(::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::Product*>* value);

  constexpr void __cordl_internal_set__definition(::OculusStudios::Platform::Core::IProductDefinition* value);

  constexpr void __cordl_internal_set__selfOwned(bool value);

  constexpr void __cordl_internal_set_dlcInstallStatus(::OculusStudios::Platform::Core::InstallStatus value);

  constexpr void __cordl_internal_set_idForVendor(::StringW value);

  /// @brief Method .ctor, addr 0x5d19318, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::OculusStudios::Platform::Core::IProductDefinition* definition, ::StringW idForVendor, ::OculusStudios::Platform::Core::InstallStatus dlcInstallStatus, bool selfOwned);

  /// @brief Method get_children, addr 0x5d190c0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::Product*>* get_children();

  /// @brief Method get_definition, addr 0x5d190b8, size 0x8, virtual false, abstract: false, final false
  inline ::OculusStudios::Platform::Core::IProductDefinition* get_definition();

  /// @brief Method get_id, addr 0x5d18f6c, size 0xa4, virtual false, abstract: false, final false
  inline ::StringW get_id();

  /// @brief Method get_owned, addr 0x5d190c8, size 0x250, virtual false, abstract: false, final false
  inline bool get_owned();

  /// @brief Method get_ownershipRequirement, addr 0x5d19010, size 0xa8, virtual false, abstract: false, final false
  inline ::OculusStudios::Platform::Core::OwnershipRequirement get_ownershipRequirement();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Product();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Product", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Product(Product&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Product", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Product(Product const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22142 };

  /// @brief Field _definition, offset: 0x10, size: 0x8, def value: None
  ::OculusStudios::Platform::Core::IProductDefinition* ____definition;

  /// @brief Field _children, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::OculusStudios::Platform::Core::Product*>* ____children;

  /// @brief Field idForVendor, offset: 0x20, size: 0x8, def value: None
  ::StringW ___idForVendor;

  /// @brief Field dlcInstallStatus, offset: 0x28, size: 0x4, def value: None
  ::OculusStudios::Platform::Core::InstallStatus ___dlcInstallStatus;

  /// @brief Field _selfOwned, offset: 0x2c, size: 0x1, def value: None
  bool ____selfOwned;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::Platform::Core::Product, ____definition) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Core::Product, ____children) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Core::Product, ___idForVendor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Core::Product, ___dlcInstallStatus) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Core::Product, ____selfOwned) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::Platform::Core::Product, 0x30>, "Size mismatch!");

} // namespace OculusStudios::Platform::Core
NEED_NO_BOX(::OculusStudios::Platform::Core::Product);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Core::Product*, "OculusStudios.Platform.Core", "Product");
NEED_NO_BOX(::OculusStudios::Platform::Core::Product___c);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Core::Product___c*, "OculusStudios.Platform.Core", "Product/<>c");
