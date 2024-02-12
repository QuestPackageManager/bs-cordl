#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IPlatformAchievementsHandler)
namespace GlobalNamespace {
class HMAsyncRequest;
}
namespace GlobalNamespace {
class __IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler;
}
namespace GlobalNamespace {
struct __IPlatformAchievementsHandler__GetUnlockedAchievementsResult;
}
namespace GlobalNamespace {
class __IPlatformAchievementsHandler__UnlockAchievementCompletionHandler;
}
namespace GlobalNamespace {
struct __IPlatformAchievementsHandler__UnlockAchievementResult;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct __IPlatformAchievementsHandler__GetUnlockedAchievementsResult;
}
namespace GlobalNamespace {
struct __IPlatformAchievementsHandler__UnlockAchievementResult;
}
namespace GlobalNamespace {
class IPlatformAchievementsHandler;
}
namespace GlobalNamespace {
class __IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler;
}
namespace GlobalNamespace {
class __IPlatformAchievementsHandler__UnlockAchievementCompletionHandler;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult);
MARK_VAL_T(::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult);
MARK_REF_PTR_T(::GlobalNamespace::IPlatformAchievementsHandler);
MARK_REF_PTR_T(::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler);
MARK_REF_PTR_T(::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler);
// Type: ::UnlockAchievementResult
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10553))
// CS Name: ::IPlatformAchievementsHandler::UnlockAchievementResult
struct CORDL_TYPE __IPlatformAchievementsHandler__UnlockAchievementResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____IPlatformAchievementsHandler__UnlockAchievementResult_Unwrapped
  enum struct ____IPlatformAchievementsHandler__UnlockAchievementResult_Unwrapped : int32_t {
    __E_OK = static_cast<int32_t>(0x0),
    __E_Failed = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____IPlatformAchievementsHandler__UnlockAchievementResult_Unwrapped() const noexcept {
    return static_cast<____IPlatformAchievementsHandler__UnlockAchievementResult_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __IPlatformAchievementsHandler__UnlockAchievementResult(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __IPlatformAchievementsHandler__UnlockAchievementResult();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field OK value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult const OK;

  /// @brief Field Failed value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult const Failed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GetUnlockedAchievementsResult
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10554))
// CS Name: ::IPlatformAchievementsHandler::GetUnlockedAchievementsResult
struct CORDL_TYPE __IPlatformAchievementsHandler__GetUnlockedAchievementsResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____IPlatformAchievementsHandler__GetUnlockedAchievementsResult_Unwrapped
  enum struct ____IPlatformAchievementsHandler__GetUnlockedAchievementsResult_Unwrapped : int32_t {
    __E_OK = static_cast<int32_t>(0x0),
    __E_Failed = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____IPlatformAchievementsHandler__GetUnlockedAchievementsResult_Unwrapped() const noexcept {
    return static_cast<____IPlatformAchievementsHandler__GetUnlockedAchievementsResult_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __IPlatformAchievementsHandler__GetUnlockedAchievementsResult(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __IPlatformAchievementsHandler__GetUnlockedAchievementsResult();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field OK value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult const OK;

  /// @brief Field Failed value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult const Failed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::UnlockAchievementCompletionHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10555))
// CS Name: ::IPlatformAchievementsHandler::UnlockAchievementCompletionHandler*
class CORDL_TYPE __IPlatformAchievementsHandler__UnlockAchievementCompletionHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x125ce7c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x125d23c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult result);

  /// @brief Method BeginInvoke, addr 0x125d250, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult result, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x125d2d4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IPlatformAchievementsHandler__UnlockAchievementCompletionHandler(__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IPlatformAchievementsHandler__UnlockAchievementCompletionHandler(__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IPlatformAchievementsHandler__UnlockAchievementCompletionHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::GetUnlockedAchievementsCompletionHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10556))
// CS Name: ::IPlatformAchievementsHandler::GetUnlockedAchievementsCompletionHandler*
class CORDL_TYPE __IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x125cdb0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x125d2e0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult result, ::ArrayW<::StringW, ::Array<::StringW>*> unlockedAchievementsIds);

  /// @brief Method BeginInvoke, addr 0x125d2f4, size 0x90, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult result, ::ArrayW<::StringW, ::Array<::StringW>*> unlockedAchievementsIds,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x125d384, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler(__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler(__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::IPlatformAchievementsHandler
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10557))
// CS Name: ::IPlatformAchievementsHandler*
class CORDL_TYPE IPlatformAchievementsHandler {
public:
  // Declarations
  using GetUnlockedAchievementsCompletionHandler = ::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler;

  using UnlockAchievementCompletionHandler = ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler;

  using GetUnlockedAchievementsResult = ::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult;

  using UnlockAchievementResult = ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult;

  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Initialize();

  /// @brief Method UnlockAchievement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::HMAsyncRequest* UnlockAchievement(::StringW achievementId, ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler* completionHandler);

  /// @brief Method GetUnlockedAchievements, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::HMAsyncRequest* GetUnlockedAchievements(::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler* completionHandler);

  // Ctor Parameters [CppParam { name: "", ty: "IPlatformAchievementsHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPlatformAchievementsHandler(IPlatformAchievementsHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPlatformAchievementsHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPlatformAchievementsHandler(IPlatformAchievementsHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult, "", "IPlatformAchievementsHandler/GetUnlockedAchievementsResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult, "", "IPlatformAchievementsHandler/UnlockAchievementResult");
NEED_NO_BOX(::GlobalNamespace::IPlatformAchievementsHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IPlatformAchievementsHandler*, "", "IPlatformAchievementsHandler");
NEED_NO_BOX(::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler*, "", "IPlatformAchievementsHandler/GetUnlockedAchievementsCompletionHandler");
NEED_NO_BOX(::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler*, "", "IPlatformAchievementsHandler/UnlockAchievementCompletionHandler");
