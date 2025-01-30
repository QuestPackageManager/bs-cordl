#pragma once
// IWYU pragma private; include "Internal/Runtime/Augments/RuntimeAugments.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RuntimeAugments)
namespace Internal::Runtime::Augments {
class ReflectionExecutionDomainCallbacks;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Internal::Runtime::Augments {
class RuntimeAugments;
}
// Write type traits
MARK_REF_PTR_T(::Internal::Runtime::Augments::RuntimeAugments);
// Dependencies System.Object
namespace Internal::Runtime::Augments {
// Is value type: false
// CS Name: Internal.Runtime.Augments.RuntimeAugments
class CORDL_TYPE RuntimeAugments : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_reflectionExecutionDomainCallbacks, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_reflectionExecutionDomainCallbacks,
                      put = setStaticF_s_reflectionExecutionDomainCallbacks)) ::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks* s_reflectionExecutionDomainCallbacks;

  /// @brief Method ReportUnhandledException, addr 0x3c70e58, size 0x20, virtual false, abstract: false, final false
  static inline void ReportUnhandledException(::System::Exception* exception);

  static inline ::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks* getStaticF_s_reflectionExecutionDomainCallbacks();

  /// @brief Method get_Callbacks, addr 0x3c70e78, size 0x58, virtual false, abstract: false, final false
  static inline ::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks* get_Callbacks();

  static inline void setStaticF_s_reflectionExecutionDomainCallbacks(::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeAugments();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeAugments", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeAugments(RuntimeAugments&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeAugments", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeAugments(RuntimeAugments const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2306 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Internal::Runtime::Augments::RuntimeAugments, 0x10>, "Size mismatch!");

} // namespace Internal::Runtime::Augments
NEED_NO_BOX(::Internal::Runtime::Augments::RuntimeAugments);
DEFINE_IL2CPP_ARG_TYPE(::Internal::Runtime::Augments::RuntimeAugments*, "Internal.Runtime.Augments", "RuntimeAugments");
