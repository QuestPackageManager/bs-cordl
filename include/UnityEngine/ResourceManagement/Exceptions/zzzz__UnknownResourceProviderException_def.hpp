#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ResourceManagement/Exceptions/zzzz__ResourceManagerException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UnknownResourceProviderException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Exceptions {
class UnknownResourceProviderException;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException);
// Type: UnityEngine.ResourceManagement.Exceptions::UnknownResourceProviderException
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Exceptions {
// Is value type: false
// CS Name: ::UnityEngine.ResourceManagement.Exceptions::UnknownResourceProviderException*
class CORDL_TYPE UnknownResourceProviderException : public ::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException {
public:
  // Declarations
  __declspec(property(get = get_Location, put = set_Location))::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* Location;

  __declspec(property(get = get_Message))::StringW Message;

  /// @brief Field <Location>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__Location_k__BackingField,
                      put = __cordl_internal_set__Location_k__BackingField))::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* _Location_k__BackingField;

  static inline ::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException* New_ctor();

  static inline ::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException* New_ctor(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  static inline ::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException* New_ctor(::StringW message);

  static inline ::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException* New_ctor(::StringW message, ::System::Exception* innerException);

  static inline ::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException* New_ctor(::System::Runtime::Serialization::SerializationInfo* message,
                                                                                                          ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method ToString, addr 0x30f99b4, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& __cordl_internal_get__Location_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*> const& __cordl_internal_get__Location_k__BackingField() const;

  constexpr void __cordl_internal_set__Location_k__BackingField(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value);

  /// @brief Method .ctor, addr 0x30f9790, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x30f5504, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  /// @brief Method .ctor, addr 0x30f9794, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x30f9798, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x30f979c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* message, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_Location, addr 0x30f9780, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* get_Location();

  /// @brief Method get_Message, addr 0x30f97a0, size 0x214, virtual true, abstract: false, final false
  inline ::StringW get_Message();

  /// @brief Method set_Location, addr 0x30f9788, size 0x8, virtual false, abstract: false, final false
  inline void set_Location(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnknownResourceProviderException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnknownResourceProviderException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnknownResourceProviderException(UnknownResourceProviderException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnknownResourceProviderException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnknownResourceProviderException(UnknownResourceProviderException const&) = delete;

  /// @brief Field <Location>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* ____Location_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException, 0x98>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException, ____Location_k__BackingField) == 0x90, "Offset mismatch!");

} // namespace UnityEngine::ResourceManagement::Exceptions
NEED_NO_BOX(::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*, "UnityEngine.ResourceManagement.Exceptions", "UnknownResourceProviderException");
