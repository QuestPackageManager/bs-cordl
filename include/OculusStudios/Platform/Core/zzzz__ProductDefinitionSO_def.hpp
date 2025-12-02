#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/ProductDefinitionSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/Platform/Core/zzzz__OwnershipRequirement_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ProductDefinitionSO)
namespace AYellowpaper::SerializedCollections {
template <typename TKey, typename TValue> class SerializedDictionary_2;
}
namespace OculusStudios::Platform::Core {
class IProductDefinition;
}
namespace OculusStudios::Platform::Core {
struct OwnershipRequirement;
}
namespace OculusStudios::Platform::Core {
struct Vendor;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace OculusStudios::Platform::Core {
class ProductDefinitionSO;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::Platform::Core::ProductDefinitionSO);
// Dependencies OculusStudios.Platform.Core.OwnershipRequirement, UnityEngine.ScriptableObject
namespace OculusStudios::Platform::Core {
// Is value type: false
// CS Name: OculusStudios.Platform.Core.ProductDefinitionSO
class CORDL_TYPE ProductDefinitionSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field _children, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__children,
                      put = __cordl_internal_set__children)) ::System::Collections::Generic::List_1<::UnityW<::OculusStudios::Platform::Core::ProductDefinitionSO>>* _children;

  /// @brief Field _id, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__id, put = __cordl_internal_set__id)) ::StringW _id;

  /// @brief Field _idForVendor, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__idForVendor,
                      put = __cordl_internal_set__idForVendor)) ::AYellowpaper::SerializedCollections::SerializedDictionary_2<::OculusStudios::Platform::Core::Vendor, ::StringW>* _idForVendor;

  /// @brief Field _ownershipRequirement, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__ownershipRequirement, put = __cordl_internal_set__ownershipRequirement)) ::OculusStudios::Platform::Core::OwnershipRequirement _ownershipRequirement;

  __declspec(property(get = get_children)) ::System::Collections::Generic::IEnumerable_1<::OculusStudios::Platform::Core::IProductDefinition*>* children;

  __declspec(property(get = get_id)) ::StringW id;

  __declspec(property(get = get_idForVendor)) ::AYellowpaper::SerializedCollections::SerializedDictionary_2<::OculusStudios::Platform::Core::Vendor, ::StringW>* idForVendor;

  __declspec(property(get = get_ownershipRequirement)) ::OculusStudios::Platform::Core::OwnershipRequirement ownershipRequirement;

  /// @brief Convert operator to "::OculusStudios::Platform::Core::IProductDefinition"
  constexpr operator ::OculusStudios::Platform::Core::IProductDefinition*() noexcept;

  static inline ::OculusStudios::Platform::Core::ProductDefinitionSO* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::OculusStudios::Platform::Core::ProductDefinitionSO>>* const& __cordl_internal_get__children() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::OculusStudios::Platform::Core::ProductDefinitionSO>>*& __cordl_internal_get__children();

  constexpr ::StringW const& __cordl_internal_get__id() const;

  constexpr ::StringW& __cordl_internal_get__id();

  constexpr ::AYellowpaper::SerializedCollections::SerializedDictionary_2<::OculusStudios::Platform::Core::Vendor, ::StringW>* const& __cordl_internal_get__idForVendor() const;

  constexpr ::AYellowpaper::SerializedCollections::SerializedDictionary_2<::OculusStudios::Platform::Core::Vendor, ::StringW>*& __cordl_internal_get__idForVendor();

  constexpr ::OculusStudios::Platform::Core::OwnershipRequirement const& __cordl_internal_get__ownershipRequirement() const;

  constexpr ::OculusStudios::Platform::Core::OwnershipRequirement& __cordl_internal_get__ownershipRequirement();

  constexpr void __cordl_internal_set__children(::System::Collections::Generic::List_1<::UnityW<::OculusStudios::Platform::Core::ProductDefinitionSO>>* value);

  constexpr void __cordl_internal_set__id(::StringW value);

  constexpr void __cordl_internal_set__idForVendor(::AYellowpaper::SerializedCollections::SerializedDictionary_2<::OculusStudios::Platform::Core::Vendor, ::StringW>* value);

  constexpr void __cordl_internal_set__ownershipRequirement(::OculusStudios::Platform::Core::OwnershipRequirement value);

  /// @brief Method .ctor, addr 0x5d193d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_children, addr 0x5d193c4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::OculusStudios::Platform::Core::IProductDefinition*>* get_children();

  /// @brief Method get_id, addr 0x5d193b4, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_id();

  /// @brief Method get_idForVendor, addr 0x5d193bc, size 0x8, virtual true, abstract: false, final true
  inline ::AYellowpaper::SerializedCollections::SerializedDictionary_2<::OculusStudios::Platform::Core::Vendor, ::StringW>* get_idForVendor();

  /// @brief Method get_ownershipRequirement, addr 0x5d193cc, size 0x8, virtual true, abstract: false, final true
  inline ::OculusStudios::Platform::Core::OwnershipRequirement get_ownershipRequirement();

  /// @brief Convert to "::OculusStudios::Platform::Core::IProductDefinition"
  constexpr ::OculusStudios::Platform::Core::IProductDefinition* i___OculusStudios__Platform__Core__IProductDefinition() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProductDefinitionSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProductDefinitionSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProductDefinitionSO(ProductDefinitionSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProductDefinitionSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProductDefinitionSO(ProductDefinitionSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22143 };

  /// @brief Field _id, offset: 0x18, size: 0x8, def value: None
  ::StringW ____id;

  /// @brief Field _idForVendor, offset: 0x20, size: 0x8, def value: None
  ::AYellowpaper::SerializedCollections::SerializedDictionary_2<::OculusStudios::Platform::Core::Vendor, ::StringW>* ____idForVendor;

  /// @brief Field _children, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::OculusStudios::Platform::Core::ProductDefinitionSO>>* ____children;

  /// @brief Field _ownershipRequirement, offset: 0x30, size: 0x4, def value: None
  ::OculusStudios::Platform::Core::OwnershipRequirement ____ownershipRequirement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::Platform::Core::ProductDefinitionSO, ____id) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Core::ProductDefinitionSO, ____idForVendor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Core::ProductDefinitionSO, ____children) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Core::ProductDefinitionSO, ____ownershipRequirement) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::Platform::Core::ProductDefinitionSO, 0x38>, "Size mismatch!");

} // namespace OculusStudios::Platform::Core
NEED_NO_BOX(::OculusStudios::Platform::Core::ProductDefinitionSO);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Core::ProductDefinitionSO*, "OculusStudios.Platform.Core", "ProductDefinitionSO");
