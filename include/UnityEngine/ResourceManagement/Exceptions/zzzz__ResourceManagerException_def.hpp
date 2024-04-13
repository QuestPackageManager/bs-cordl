#pragma once
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
// Type: UnityEngine.ResourceManagement.Exceptions::ResourceManagerException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Exceptions {
// Is value type: false
// CS Name: ::UnityEngine.ResourceManagement.Exceptions::ResourceManagerException*
class CORDL_TYPE ResourceManagerException : public ::System::Exception {
public:
  // Declarations
  static inline ::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException* New_ctor();

  static inline ::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException* New_ctor(::StringW message);

  static inline ::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException* New_ctor(::StringW message, ::System::Exception* innerException);

  static inline ::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException* New_ctor(::System::Runtime::Serialization::SerializationInfo* message,
                                                                                                  ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method ToString, addr 0x30ff6f4, size 0x88, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x30ff544, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x30ff59c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x30ff604, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x30ff674, size 0x80, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException, 0x90>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Exceptions
NEED_NO_BOX(::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Exceptions::ResourceManagerException*, "UnityEngine.ResourceManagement.Exceptions", "ResourceManagerException");
