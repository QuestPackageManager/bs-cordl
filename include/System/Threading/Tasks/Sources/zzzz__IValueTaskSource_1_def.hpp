#pragma once
// IWYU pragma private; include "System/Threading/Tasks/Sources/IValueTaskSource_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IValueTaskSource_1)
namespace System::Threading::Tasks::Sources {
struct ValueTaskSourceOnCompletedFlags;
}
namespace System::Threading::Tasks::Sources {
struct ValueTaskSourceStatus;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading::Tasks::Sources {
template <typename TResult> class IValueTaskSource_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Threading::Tasks::Sources::IValueTaskSource_1);
// Dependencies
namespace System::Threading::Tasks::Sources {
// cpp template
template <typename TResult>
// Is value type: false
// CS Name: System.Threading.Tasks.Sources.IValueTaskSource`1<TResult>
class CORDL_TYPE IValueTaskSource_1 {
public:
  // Declarations
  /// @brief Method GetResult, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TResult GetResult(int16_t token);

  /// @brief Method GetStatus, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Sources::ValueTaskSourceStatus GetStatus(int16_t token);

  /// @brief Method OnCompleted, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, int16_t token, ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags flags);

  // Ctor Parameters [CppParam { name: "", ty: "IValueTaskSource_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IValueTaskSource_1(IValueTaskSource_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2827 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading::Tasks::Sources
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::Sources::IValueTaskSource_1, "System.Threading.Tasks.Sources", "IValueTaskSource`1");
