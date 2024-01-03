#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
CORDL_MODULE_EXPORT(CancellationTokenSource_LinkedNCancellationTokenSource)
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class __CancellationTokenSource__LinkedNCancellationTokenSource____c;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class __CancellationTokenSource__LinkedNCancellationTokenSource;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::__CancellationTokenSource__LinkedNCancellationTokenSource);
// Type: ::LinkedNCancellationTokenSource
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2688))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2687))
// CS Name: ::CancellationTokenSource::LinkedNCancellationTokenSource*
class CORDL_TYPE __CancellationTokenSource__LinkedNCancellationTokenSource : public ::System::Threading::CancellationTokenSource {
public:
  // Declarations
  using __c = ::GlobalNamespace::__CancellationTokenSource__LinkedNCancellationTokenSource____c;

  /// @brief Field s_linkedTokenCancelDelegate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_linkedTokenCancelDelegate, put = setStaticF_s_linkedTokenCancelDelegate))::System::Action_1<::System::Object*>* s_linkedTokenCancelDelegate;

  static inline void setStaticF_s_linkedTokenCancelDelegate(::System::Action_1<::System::Object*>* value);

  static inline ::System::Action_1<::System::Object*>* getStaticF_s_linkedTokenCancelDelegate();

  // Ctor Parameters [CppParam { name: "", ty: "__CancellationTokenSource__LinkedNCancellationTokenSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CancellationTokenSource__LinkedNCancellationTokenSource(__CancellationTokenSource__LinkedNCancellationTokenSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CancellationTokenSource__LinkedNCancellationTokenSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CancellationTokenSource__LinkedNCancellationTokenSource(__CancellationTokenSource__LinkedNCancellationTokenSource const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CancellationTokenSource__LinkedNCancellationTokenSource();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::__CancellationTokenSource__LinkedNCancellationTokenSource, 0x40>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::__CancellationTokenSource__LinkedNCancellationTokenSource);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::__CancellationTokenSource__LinkedNCancellationTokenSource*, "System.Threading", "CancellationTokenSource/LinkedNCancellationTokenSource");
