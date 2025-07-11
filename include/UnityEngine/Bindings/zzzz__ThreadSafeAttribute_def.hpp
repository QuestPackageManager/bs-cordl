#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/ThreadSafeAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Bindings/zzzz__NativeMethodAttribute_def.hpp"
CORDL_MODULE_EXPORT(ThreadSafeAttribute)
// Forward declare root types
namespace UnityEngine::Bindings {
class ThreadSafeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Bindings::ThreadSafeAttribute);
// Dependencies UnityEngine.Bindings.NativeMethodAttribute
namespace UnityEngine::Bindings {
// Is value type: false
// CS Name: UnityEngine.Bindings.ThreadSafeAttribute
class CORDL_TYPE ThreadSafeAttribute : public ::UnityEngine::Bindings::NativeMethodAttribute {
public:
  // Declarations
  static inline ::UnityEngine::Bindings::ThreadSafeAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x4919164, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThreadSafeAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThreadSafeAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThreadSafeAttribute(ThreadSafeAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThreadSafeAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThreadSafeAttribute(ThreadSafeAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18720 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::ThreadSafeAttribute, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Bindings
NEED_NO_BOX(::UnityEngine::Bindings::ThreadSafeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::ThreadSafeAttribute*, "UnityEngine.Bindings", "ThreadSafeAttribute");
