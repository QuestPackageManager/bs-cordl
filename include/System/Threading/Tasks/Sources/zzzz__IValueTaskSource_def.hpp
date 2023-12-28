#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IValueTaskSource)
namespace System::Threading::Tasks::Sources {
struct ValueTaskSourceOnCompletedFlags;
}
namespace System {
class Object;
}
namespace System {
template <typename T> class Action_1;
}
namespace System::Threading::Tasks::Sources {
struct ValueTaskSourceStatus;
}
// Forward declare root types
namespace System::Threading::Tasks::Sources {
class IValueTaskSource;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::Sources::IValueTaskSource);
// Type: System.Threading.Tasks.Sources::IValueTaskSource
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading::Tasks::Sources {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2823))
// CS Name: ::System.Threading.Tasks.Sources::IValueTaskSource*
class CORDL_TYPE IValueTaskSource {
public:
  // Declarations
  /// @brief Method GetStatus addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Threading::Tasks::Sources::ValueTaskSourceStatus GetStatus(int16_t token);

  /// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, int16_t token, ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags flags);

  /// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void GetResult(int16_t token);

  // Ctor Parameters [CppParam { name: "", ty: "IValueTaskSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IValueTaskSource(IValueTaskSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IValueTaskSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IValueTaskSource(IValueTaskSource const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading::Tasks::Sources
NEED_NO_BOX(::System::Threading::Tasks::Sources::IValueTaskSource);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::Sources::IValueTaskSource*, "System.Threading.Tasks.Sources", "IValueTaskSource");
