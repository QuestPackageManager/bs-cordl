#pragma once
// IWYU pragma private; include "GlobalNamespace/IPlatformAchievementsHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IPlatformAchievementsHandler)
namespace GlobalNamespace {
class HMAsyncRequest;
}
namespace GlobalNamespace {
class IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler;
}
namespace GlobalNamespace {
struct IPlatformAchievementsHandler_GetUnlockedAchievementsResult;
}
namespace GlobalNamespace {
class IPlatformAchievementsHandler_UnlockAchievementCompletionHandler;
}
namespace GlobalNamespace {
struct IPlatformAchievementsHandler_UnlockAchievementResult;
}
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
// Forward declare root types
namespace GlobalNamespace {
struct IPlatformAchievementsHandler_GetUnlockedAchievementsResult;
}
namespace GlobalNamespace {
struct IPlatformAchievementsHandler_UnlockAchievementResult;
}
namespace GlobalNamespace {
class IPlatformAchievementsHandler;
}
namespace GlobalNamespace {
class IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler;
}
namespace GlobalNamespace {
class IPlatformAchievementsHandler_UnlockAchievementCompletionHandler;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsResult);
MARK_VAL_T(::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementResult);
MARK_REF_PTR_T(::GlobalNamespace::IPlatformAchievementsHandler);
MARK_REF_PTR_T(::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler);
MARK_REF_PTR_T(::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: IPlatformAchievementsHandler/UnlockAchievementResult
struct CORDL_TYPE IPlatformAchievementsHandler_UnlockAchievementResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __IPlatformAchievementsHandler_UnlockAchievementResult_Unwrapped
  enum struct __IPlatformAchievementsHandler_UnlockAchievementResult_Unwrapped : int32_t {
    __E_OK = static_cast<int32_t>(0x0),
    __E_Failed = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __IPlatformAchievementsHandler_UnlockAchievementResult_Unwrapped() const noexcept {
    return static_cast<__IPlatformAchievementsHandler_UnlockAchievementResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr IPlatformAchievementsHandler_UnlockAchievementResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr IPlatformAchievementsHandler_UnlockAchievementResult(int32_t value__) noexcept;

  /// @brief Field Failed value: I32(1)
  static ::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementResult const Failed;

  /// @brief Field OK value: I32(0)
  static ::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementResult const OK;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12755 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementResult, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementResult, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: IPlatformAchievementsHandler/GetUnlockedAchievementsResult
struct CORDL_TYPE IPlatformAchievementsHandler_GetUnlockedAchievementsResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __IPlatformAchievementsHandler_GetUnlockedAchievementsResult_Unwrapped
  enum struct __IPlatformAchievementsHandler_GetUnlockedAchievementsResult_Unwrapped : int32_t {
    __E_OK = static_cast<int32_t>(0x0),
    __E_Failed = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __IPlatformAchievementsHandler_GetUnlockedAchievementsResult_Unwrapped() const noexcept {
    return static_cast<__IPlatformAchievementsHandler_GetUnlockedAchievementsResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr IPlatformAchievementsHandler_GetUnlockedAchievementsResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr IPlatformAchievementsHandler_GetUnlockedAchievementsResult(int32_t value__) noexcept;

  /// @brief Field Failed value: I32(1)
  static ::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsResult const Failed;

  /// @brief Field OK value: I32(0)
  static ::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsResult const OK;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12756 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsResult, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsResult, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: IPlatformAchievementsHandler/UnlockAchievementCompletionHandler
class CORDL_TYPE IPlatformAchievementsHandler_UnlockAchievementCompletionHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x26a420c, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementResult result, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x26a4290, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x26a41f8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementResult result);

  static inline ::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x26a3dfc, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IPlatformAchievementsHandler_UnlockAchievementCompletionHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IPlatformAchievementsHandler_UnlockAchievementCompletionHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPlatformAchievementsHandler_UnlockAchievementCompletionHandler(IPlatformAchievementsHandler_UnlockAchievementCompletionHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPlatformAchievementsHandler_UnlockAchievementCompletionHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPlatformAchievementsHandler_UnlockAchievementCompletionHandler(IPlatformAchievementsHandler_UnlockAchievementCompletionHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12757 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: IPlatformAchievementsHandler/GetUnlockedAchievementsCompletionHandler
class CORDL_TYPE IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x26a42b0, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsResult result, ::ArrayW<::StringW, ::Array<::StringW>*> unlockedAchievementsIds,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x26a4344, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x26a429c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsResult result, ::ArrayW<::StringW, ::Array<::StringW>*> unlockedAchievementsIds);

  static inline ::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x26a3d68, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler(IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler(IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12758 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IPlatformAchievementsHandler
class CORDL_TYPE IPlatformAchievementsHandler {
public:
  // Declarations
  using GetUnlockedAchievementsCompletionHandler = ::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler;

  using GetUnlockedAchievementsResult = ::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsResult;

  using UnlockAchievementCompletionHandler = ::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler;

  using UnlockAchievementResult = ::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementResult;

  /// @brief Method GetUnlockedAchievements, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::HMAsyncRequest* GetUnlockedAchievements(::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler* completionHandler);

  /// @brief Method Initialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Initialize();

  /// @brief Method UnlockAchievement, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::HMAsyncRequest* UnlockAchievement(::StringW achievementId, ::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler* completionHandler);

  // Ctor Parameters [CppParam { name: "", ty: "IPlatformAchievementsHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPlatformAchievementsHandler(IPlatformAchievementsHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12759 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsResult, "", "IPlatformAchievementsHandler/GetUnlockedAchievementsResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementResult, "", "IPlatformAchievementsHandler/UnlockAchievementResult");
NEED_NO_BOX(::GlobalNamespace::IPlatformAchievementsHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IPlatformAchievementsHandler*, "", "IPlatformAchievementsHandler");
NEED_NO_BOX(::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IPlatformAchievementsHandler_GetUnlockedAchievementsCompletionHandler*, "", "IPlatformAchievementsHandler/GetUnlockedAchievementsCompletionHandler");
NEED_NO_BOX(::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IPlatformAchievementsHandler_UnlockAchievementCompletionHandler*, "", "IPlatformAchievementsHandler/UnlockAchievementCompletionHandler");
