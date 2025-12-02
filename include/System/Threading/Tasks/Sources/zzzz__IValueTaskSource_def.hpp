#pragma once
// IWYU pragma private; include "System/Threading/Tasks/Sources/IValueTaskSource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IValueTaskSource)
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
class IValueTaskSource;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::Sources::IValueTaskSource);
// Dependencies
namespace System::Threading::Tasks::Sources {
// Is value type: false
// CS Name: System.Threading.Tasks.Sources.IValueTaskSource
class CORDL_TYPE IValueTaskSource {
public:
  // Declarations
  /// @brief Method GetResult, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void GetResult(int16_t token);

  /// @brief Method GetStatus, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Sources::ValueTaskSourceStatus GetStatus(int16_t token);

  /// @brief Method OnCompleted, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, int16_t token, ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags flags);

  // Ctor Parameters [CppParam { name: "", ty: "IValueTaskSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IValueTaskSource(IValueTaskSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2839 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading::Tasks::Sources
NEED_NO_BOX(::System::Threading::Tasks::Sources::IValueTaskSource);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::Sources::IValueTaskSource*, "System.Threading.Tasks.Sources", "IValueTaskSource");
