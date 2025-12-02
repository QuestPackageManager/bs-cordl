#pragma once
// IWYU pragma private; include "System/Threading/Tasks/Sources/ManualResetValueTaskSourceCoreShared.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ManualResetValueTaskSourceCoreShared)
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading::Tasks::Sources {
class ManualResetValueTaskSourceCoreShared;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCoreShared);
// Dependencies System.Object
namespace System::Threading::Tasks::Sources {
// Is value type: false
// CS Name: System.Threading.Tasks.Sources.ManualResetValueTaskSourceCoreShared
class CORDL_TYPE ManualResetValueTaskSourceCoreShared : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_sentinel, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_sentinel, put = setStaticF_s_sentinel)) ::System::Action_1<::System::Object*>* s_sentinel;

  /// @brief Method CompletionSentinel, addr 0x5ab1ea0, size 0x48, virtual false, abstract: false, final false
  static inline void CompletionSentinel(::System::Object* _);

  /// @brief Method ThrowInvalidOperationException, addr 0x5ab1e68, size 0x38, virtual false, abstract: false, final false
  static inline void ThrowInvalidOperationException();

  static inline ::System::Action_1<::System::Object*>* getStaticF_s_sentinel();

  static inline void setStaticF_s_sentinel(::System::Action_1<::System::Object*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ManualResetValueTaskSourceCoreShared();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ManualResetValueTaskSourceCoreShared", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ManualResetValueTaskSourceCoreShared(ManualResetValueTaskSourceCoreShared&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ManualResetValueTaskSourceCoreShared", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ManualResetValueTaskSourceCoreShared(ManualResetValueTaskSourceCoreShared const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2843 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCoreShared, 0x10>, "Size mismatch!");

} // namespace System::Threading::Tasks::Sources
NEED_NO_BOX(::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCoreShared);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCoreShared*, "System.Threading.Tasks.Sources", "ManualResetValueTaskSourceCoreShared");
