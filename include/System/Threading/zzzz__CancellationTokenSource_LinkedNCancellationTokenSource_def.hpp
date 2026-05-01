#pragma once
// IWYU pragma private; include "System/Threading/CancellationTokenSource_LinkedNCancellationTokenSource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
CORDL_MODULE_EXPORT(CancellationTokenSource_LinkedNCancellationTokenSource)
namespace System::Threading {
class LinkedNCancellationTokenSource_CancellationTokenSource___c;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class CancellationTokenSource_LinkedNCancellationTokenSource;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource);
// Dependencies System.Threading.CancellationTokenSource
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Threading.CancellationTokenSource/LinkedNCancellationTokenSource
class CORDL_TYPE CancellationTokenSource_LinkedNCancellationTokenSource : public ::System::Threading::CancellationTokenSource {
public:
  // Declarations
  using __c = ::System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c;

  /// @brief Field s_linkedTokenCancelDelegate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_linkedTokenCancelDelegate, put = setStaticF_s_linkedTokenCancelDelegate)) ::System::Action_1<::System::Object*>* s_linkedTokenCancelDelegate;

  static inline ::System::Action_1<::System::Object*>* getStaticF_s_linkedTokenCancelDelegate();

  static inline void setStaticF_s_linkedTokenCancelDelegate(::System::Action_1<::System::Object*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CancellationTokenSource_LinkedNCancellationTokenSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CancellationTokenSource_LinkedNCancellationTokenSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CancellationTokenSource_LinkedNCancellationTokenSource(CancellationTokenSource_LinkedNCancellationTokenSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CancellationTokenSource_LinkedNCancellationTokenSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CancellationTokenSource_LinkedNCancellationTokenSource(CancellationTokenSource_LinkedNCancellationTokenSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2699 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CancellationTokenSource_LinkedNCancellationTokenSource*, "System.Threading", "CancellationTokenSource/LinkedNCancellationTokenSource");
