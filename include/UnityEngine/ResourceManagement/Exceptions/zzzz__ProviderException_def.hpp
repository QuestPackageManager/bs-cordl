#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ResourceManagement/Exceptions/zzzz__OperationException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ProviderException)
namespace System {
class Exception;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Exceptions {
class ProviderException;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Exceptions::ProviderException);
// Type: UnityEngine.ResourceManagement.Exceptions::ProviderException
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Exceptions {
// Is value type: false
// CS Name: ::UnityEngine.ResourceManagement.Exceptions::ProviderException*
class CORDL_TYPE ProviderException : public ::UnityEngine::ResourceManagement::Exceptions::OperationException {
public:
  // Declarations
  __declspec(property(get = get_Location))::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* Location;

  /// @brief Field <Location>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__Location_k__BackingField,
                      put = __cordl_internal_set__Location_k__BackingField))::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* _Location_k__BackingField;

  static inline ::UnityEngine::ResourceManagement::Exceptions::ProviderException* New_ctor(::StringW message, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                                           ::System::Exception* innerException);

  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& __cordl_internal_get__Location_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*> const& __cordl_internal_get__Location_k__BackingField() const;

  constexpr void __cordl_internal_set__Location_k__BackingField(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value);

  /// @brief Method .ctor, addr 0x30ffab4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::System::Exception* innerException);

  /// @brief Method get_Location, addr 0x30ffadc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* get_Location();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProviderException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProviderException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProviderException(ProviderException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProviderException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProviderException(ProviderException const&) = delete;

  /// @brief Field <Location>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* ____Location_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Exceptions::ProviderException, 0x98>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Exceptions::ProviderException, ____Location_k__BackingField) == 0x90, "Offset mismatch!");

} // namespace UnityEngine::ResourceManagement::Exceptions
NEED_NO_BOX(::UnityEngine::ResourceManagement::Exceptions::ProviderException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Exceptions::ProviderException*, "UnityEngine.ResourceManagement.Exceptions", "ProviderException");
