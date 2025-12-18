#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/ExceptionMarshaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ExceptionMarshaller)
namespace System {
class Exception;
}
// Forward declare root types
namespace UnityEngine::Bindings {
class ExceptionMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Bindings::ExceptionMarshaller);
// Dependencies System.Object
namespace UnityEngine::Bindings {
// Is value type: false
// CS Name: UnityEngine.Bindings.ExceptionMarshaller
class CORDL_TYPE ExceptionMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_pendingException, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_pendingException, put = setStaticF_s_pendingException)) ::System::Exception* s_pendingException;

  /// @brief Method SetPendingException, addr 0x6933f7c, size 0x84, virtual false, abstract: false, final false
  static inline void SetPendingException(::System::Exception* ex);

  static inline ::System::Exception* getStaticF_s_pendingException();

  static inline void setStaticF_s_pendingException(::System::Exception* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExceptionMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExceptionMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExceptionMarshaller(ExceptionMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExceptionMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExceptionMarshaller(ExceptionMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10452 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::ExceptionMarshaller, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Bindings
NEED_NO_BOX(::UnityEngine::Bindings::ExceptionMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::ExceptionMarshaller*, "UnityEngine.Bindings", "ExceptionMarshaller");
