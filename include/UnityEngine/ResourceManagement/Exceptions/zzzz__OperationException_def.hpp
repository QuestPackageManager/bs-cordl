#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Exceptions/OperationException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OperationException)
namespace System {
class Exception;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Exceptions {
class OperationException;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Exceptions::OperationException);
// Dependencies System.Exception
namespace UnityEngine::ResourceManagement::Exceptions {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Exceptions.OperationException
class CORDL_TYPE OperationException : public ::System::Exception {
public:
  // Declarations
  static inline ::UnityEngine::ResourceManagement::Exceptions::OperationException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method ToString, addr 0x479264c, size 0x88, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x47925dc, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OperationException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OperationException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OperationException(OperationException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OperationException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OperationException(OperationException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15610 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Exceptions::OperationException, 0x90>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Exceptions
NEED_NO_BOX(::UnityEngine::ResourceManagement::Exceptions::OperationException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Exceptions::OperationException*, "UnityEngine.ResourceManagement.Exceptions", "OperationException");
