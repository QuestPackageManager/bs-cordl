#pragma once
// IWYU pragma private; include "UnityEngine/UnityException.hpp"
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
// Dependencies System.Exception
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.UnityException
class CORDL_TYPE UnityException : public ::System::Exception {
public:
  // Declarations
  static inline ::UnityEngine::UnityException* New_ctor();

  static inline ::UnityEngine::UnityException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::UnityEngine::UnityException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x48a9ac8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x48a9b48, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x48a8318, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityException(UnityException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityException(UnityException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10909 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UnityException, 0x90>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::UnityException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UnityException*, "UnityEngine", "UnityException");
