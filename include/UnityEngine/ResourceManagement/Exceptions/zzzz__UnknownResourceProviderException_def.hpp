#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Exceptions/UnknownResourceProviderException.hpp"
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
// Dependencies UnityEngine.ResourceManagement.Exceptions.ResourceManagerException
namespace UnityEngine::ResourceManagement::Exceptions {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Exceptions.UnknownResourceProviderException
class CORDL_TYPE UnknownResourceProviderException : public ::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException {
public:
  // Declarations
  __declspec(property(get = get_Location, put = set_Location)) ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* Location;

  __declspec(property(get = get_Message)) ::StringW Message;

  /// @brief Field <Location>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__Location_k__BackingField,
                      put = __cordl_internal_set__Location_k__BackingField)) ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* _Location_k__BackingField;

  static inline ::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException* New_ctor();

  static inline ::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException* New_ctor(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  static inline ::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException* New_ctor(::StringW message);

  static inline ::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException* New_ctor(::StringW message, ::System::Exception* innerException);

  static inline ::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException* New_ctor(::System::Runtime::Serialization::SerializationInfo* message,
                                                                                                          ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method ToString, addr 0x4790f70, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* const& __cordl_internal_get__Location_k__BackingField() const;

  constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& __cordl_internal_get__Location_k__BackingField();

  constexpr void __cordl_internal_set__Location_k__BackingField(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value);

  /// @brief Method .ctor, addr 0x4790df0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x478c778, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  /// @brief Method .ctor, addr 0x4790df4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x4790df8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x4790dfc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* message, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_Location, addr 0x4790de0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* get_Location();

  /// @brief Method get_Message, addr 0x4790e00, size 0x170, virtual true, abstract: false, final false
  inline ::StringW get_Message();

  /// @brief Method set_Location, addr 0x4790de8, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15600 };

  /// @brief Field <Location>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* ____Location_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException, ____Location_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException, 0x98>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Exceptions
NEED_NO_BOX(::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*, "UnityEngine.ResourceManagement.Exceptions", "UnknownResourceProviderException");
