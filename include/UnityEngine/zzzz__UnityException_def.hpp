#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UnityException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace UnityEngine {
class UnityException;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UnityException);
// Type: UnityEngine::UnityException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2559))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10139))
// CS Name: ::UnityEngine::UnityException*
class CORDL_TYPE UnityException : public ::System::Exception {
public:
  // Declarations
  static inline ::UnityEngine::UnityException* New_ctor();

  /// @brief Method .ctor addr 0x2b6bee4 size 0x80 virtual false final false
  inline void _ctor();

  static inline ::UnityEngine::UnityException* New_ctor(::StringW message);

  /// @brief Method .ctor addr 0x2b692d0 size 0x78 virtual false final false
  inline void _ctor(::StringW message);

  static inline ::UnityEngine::UnityException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x2b6bf64 size 0x80 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "UnityException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityException(UnityException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityException(UnityException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UnityException, 0x90>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::UnityException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UnityException*, "UnityEngine", "UnityException");
