#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/IProductDefinition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IProductDefinition)
namespace AYellowpaper::SerializedCollections {
template <typename TKey, typename TValue> class SerializedDictionary_2;
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
// Forward declare root types
namespace OculusStudios::Platform::Core {
class IProductDefinition;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::Platform::Core::IProductDefinition);
// Dependencies
namespace OculusStudios::Platform::Core {
// Is value type: false
// CS Name: OculusStudios.Platform.Core.IProductDefinition
class CORDL_TYPE IProductDefinition {
public:
  // Declarations
  __declspec(property(get = get_children)) ::System::Collections::Generic::IEnumerable_1<::OculusStudios::Platform::Core::IProductDefinition*>* children;

  __declspec(property(get = get_id)) ::StringW id;

  __declspec(property(get = get_idForVendor)) ::AYellowpaper::SerializedCollections::SerializedDictionary_2<::OculusStudios::Platform::Core::Vendor, ::StringW>* idForVendor;

  __declspec(property(get = get_ownershipRequirement)) ::OculusStudios::Platform::Core::OwnershipRequirement ownershipRequirement;

  /// @brief Method get_children, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::OculusStudios::Platform::Core::IProductDefinition*>* get_children();

  /// @brief Method get_id, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_id();

  /// @brief Method get_idForVendor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::AYellowpaper::SerializedCollections::SerializedDictionary_2<::OculusStudios::Platform::Core::Vendor, ::StringW>* get_idForVendor();

  /// @brief Method get_ownershipRequirement, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::OculusStudios::Platform::Core::OwnershipRequirement get_ownershipRequirement();

  // Ctor Parameters [CppParam { name: "", ty: "IProductDefinition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IProductDefinition(IProductDefinition const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22163 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::Platform::Core
NEED_NO_BOX(::OculusStudios::Platform::Core::IProductDefinition);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Core::IProductDefinition*, "OculusStudios.Platform.Core", "IProductDefinition");
