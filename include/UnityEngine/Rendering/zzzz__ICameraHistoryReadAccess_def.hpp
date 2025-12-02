#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ICameraHistoryReadAccess.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(ICameraHistoryReadAccess)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
class ICameraHistoryReadAccess_HistoryRequestDelegate;
}
namespace UnityEngine::Rendering {
class IPerFrameHistoryAccessTracker;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ICameraHistoryReadAccess;
}
namespace UnityEngine::Rendering {
class ICameraHistoryReadAccess_HistoryRequestDelegate;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ICameraHistoryReadAccess);
MARK_REF_PTR_T(::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate);
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ICameraHistoryReadAccess/HistoryRequestDelegate
class CORDL_TYPE ICameraHistoryReadAccess_HistoryRequestDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x652df08, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Rendering::IPerFrameHistoryAccessTracker* historyAccess, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x652df28, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x652def4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Rendering::IPerFrameHistoryAccessTracker* historyAccess);

  static inline ::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x652ddb0, size 0x144, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ICameraHistoryReadAccess_HistoryRequestDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ICameraHistoryReadAccess_HistoryRequestDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICameraHistoryReadAccess_HistoryRequestDelegate(ICameraHistoryReadAccess_HistoryRequestDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICameraHistoryReadAccess_HistoryRequestDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICameraHistoryReadAccess_HistoryRequestDelegate(ICameraHistoryReadAccess_HistoryRequestDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11836 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ICameraHistoryReadAccess
class CORDL_TYPE ICameraHistoryReadAccess {
public:
  // Declarations
  using HistoryRequestDelegate = ::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate;

  /// @brief Method GetHistoryForRead, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename Type> inline Type GetHistoryForRead();

  /// @brief Method add_OnGatherHistoryRequests, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_OnGatherHistoryRequests(::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate* value);

  /// @brief Method remove_OnGatherHistoryRequests, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_OnGatherHistoryRequests(::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate* value);

  // Ctor Parameters [CppParam { name: "", ty: "ICameraHistoryReadAccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICameraHistoryReadAccess(ICameraHistoryReadAccess const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11837 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ICameraHistoryReadAccess);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ICameraHistoryReadAccess*, "UnityEngine.Rendering", "ICameraHistoryReadAccess");
NEED_NO_BOX(::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*, "UnityEngine.Rendering", "ICameraHistoryReadAccess/HistoryRequestDelegate");
