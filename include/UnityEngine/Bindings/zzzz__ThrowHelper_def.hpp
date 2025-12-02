#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/ThrowHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ThrowHelper)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Bindings {
class ThrowHelper;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Bindings::ThrowHelper);
// Dependencies System.Object
namespace UnityEngine::Bindings {
// Is value type: false
// CS Name: UnityEngine.Bindings.ThrowHelper
class CORDL_TYPE ThrowHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method ThrowArgumentNullException, addr 0x68c6630, size 0x50, virtual false, abstract: false, final false
  static inline void ThrowArgumentNullException(::System::Object* obj, ::StringW parameterName);

  /// @brief Method ThrowNullReferenceException, addr 0x68c07b4, size 0x44, virtual false, abstract: false, final false
  static inline void ThrowNullReferenceException(::System::Object* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThrowHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThrowHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThrowHelper(ThrowHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThrowHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThrowHelper(ThrowHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10442 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::ThrowHelper, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Bindings
NEED_NO_BOX(::UnityEngine::Bindings::ThrowHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::ThrowHelper*, "UnityEngine.Bindings", "ThrowHelper");
