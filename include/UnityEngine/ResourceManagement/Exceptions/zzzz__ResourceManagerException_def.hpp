#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Exceptions/ResourceManagerException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ResourceManagerException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Exceptions {
class ResourceManagerException;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException);
// Dependencies System.Exception
namespace UnityEngine::ResourceManagement::Exceptions {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Exceptions.ResourceManagerException
class CORDL_TYPE ResourceManagerException : public ::System::Exception {
public:
  // Declarations
  static inline ::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException* New_ctor();

  static inline ::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException* New_ctor(::StringW message);

  static inline ::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException* New_ctor(::StringW message, ::System::Exception* innerException);

  static inline ::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException* New_ctor(::System::Runtime::Serialization::SerializationInfo* message,
                                                                                                  ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method ToString, addr 0x47923b8, size 0x88, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x4792208, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4792260, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x47922c8, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x4792338, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* message, ::System::Runtime::Serialization::StreamingContext context);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceManagerException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResourceManagerException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourceManagerException(ResourceManagerException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourceManagerException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourceManagerException(ResourceManagerException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15608 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException, 0x90>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Exceptions
NEED_NO_BOX(::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*, "UnityEngine.ResourceManagement.Exceptions", "ResourceManagerException");
