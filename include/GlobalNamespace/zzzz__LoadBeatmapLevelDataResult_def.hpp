#pragma once
// IWYU pragma private; include "GlobalNamespace/LoadBeatmapLevelDataResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LoadBeatmapLevelDataResult)
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace GlobalNamespace {
struct LoadBeatmapLevelDataResult_ErrorType;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct LoadBeatmapLevelDataResult_ErrorType;
}
namespace GlobalNamespace {
struct LoadBeatmapLevelDataResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LoadBeatmapLevelDataResult_ErrorType);
MARK_VAL_T(::GlobalNamespace::LoadBeatmapLevelDataResult);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: LoadBeatmapLevelDataResult/ErrorType
struct CORDL_TYPE LoadBeatmapLevelDataResult_ErrorType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LoadBeatmapLevelDataResult_ErrorType_Unwrapped
  enum struct __LoadBeatmapLevelDataResult_ErrorType_Unwrapped : int32_t {
    __E_BeatmapLevelNotFoundInRepository = static_cast<int32_t>(0x0),
    __E_BeatmapLevelNotOwned = static_cast<int32_t>(0x1),
    __E_BeatmapLevelDataNotFound = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LoadBeatmapLevelDataResult_ErrorType_Unwrapped() const noexcept {
    return static_cast<__LoadBeatmapLevelDataResult_ErrorType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LoadBeatmapLevelDataResult_ErrorType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LoadBeatmapLevelDataResult_ErrorType(int32_t value__) noexcept;

  /// @brief Field BeatmapLevelDataNotFound value: I32(2)
  static ::GlobalNamespace::LoadBeatmapLevelDataResult_ErrorType const BeatmapLevelDataNotFound;

  /// @brief Field BeatmapLevelNotFoundInRepository value: I32(0)
  static ::GlobalNamespace::LoadBeatmapLevelDataResult_ErrorType const BeatmapLevelNotFoundInRepository;

  /// @brief Field BeatmapLevelNotOwned value: I32(1)
  static ::GlobalNamespace::LoadBeatmapLevelDataResult_ErrorType const BeatmapLevelNotOwned;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15002 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LoadBeatmapLevelDataResult_ErrorType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LoadBeatmapLevelDataResult_ErrorType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies LoadBeatmapLevelDataResult::ErrorType, System.Nullable`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: LoadBeatmapLevelDataResult
struct CORDL_TYPE LoadBeatmapLevelDataResult {
public:
  // Declarations
  using ErrorType = ::GlobalNamespace::LoadBeatmapLevelDataResult_ErrorType;

  /// @brief Field BeatmapLevelDataNotFound, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_BeatmapLevelDataNotFound, put = setStaticF_BeatmapLevelDataNotFound)) ::GlobalNamespace::LoadBeatmapLevelDataResult BeatmapLevelDataNotFound;

  /// @brief Field BeatmapLevelNotFoundInRepository, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_BeatmapLevelNotFoundInRepository,
                      put = setStaticF_BeatmapLevelNotFoundInRepository)) ::GlobalNamespace::LoadBeatmapLevelDataResult BeatmapLevelNotFoundInRepository;

  /// @brief Field BeatmapLevelNotOwned, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_BeatmapLevelNotOwned, put = setStaticF_BeatmapLevelNotOwned)) ::GlobalNamespace::LoadBeatmapLevelDataResult BeatmapLevelNotOwned;

  __declspec(property(get = get_errorMessage)) ::StringW errorMessage;

  __declspec(property(get = get_isError)) bool isError;

  /// @brief Method FromValue, addr 0x3607200, size 0x54, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::LoadBeatmapLevelDataResult FromValue(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData);

  /// @brief Method Success, addr 0x36071f4, size 0xc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::LoadBeatmapLevelDataResult Success(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData);

  /// @brief Method .ctor, addr 0x36071ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Nullable_1<::GlobalNamespace::LoadBeatmapLevelDataResult_ErrorType> errorType, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData);

  static inline ::GlobalNamespace::LoadBeatmapLevelDataResult getStaticF_BeatmapLevelDataNotFound();

  static inline ::GlobalNamespace::LoadBeatmapLevelDataResult getStaticF_BeatmapLevelNotFoundInRepository();

  static inline ::GlobalNamespace::LoadBeatmapLevelDataResult getStaticF_BeatmapLevelNotOwned();

  /// @brief Method get_errorMessage, addr 0x3607090, size 0x15c, virtual false, abstract: false, final false
  inline ::StringW get_errorMessage();

  /// @brief Method get_isError, addr 0x360704c, size 0x44, virtual false, abstract: false, final false
  inline bool get_isError();

  static inline void setStaticF_BeatmapLevelDataNotFound(::GlobalNamespace::LoadBeatmapLevelDataResult value);

  static inline void setStaticF_BeatmapLevelNotFoundInRepository(::GlobalNamespace::LoadBeatmapLevelDataResult value);

  static inline void setStaticF_BeatmapLevelNotOwned(::GlobalNamespace::LoadBeatmapLevelDataResult value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LoadBeatmapLevelDataResult();

  // Ctor Parameters [CppParam { name: "errorType", ty: "::System::Nullable_1<::GlobalNamespace::LoadBeatmapLevelDataResult_ErrorType>", modifiers: "", def_value: None }, CppParam { name:
  // "beatmapLevelData", ty: "::GlobalNamespace::IBeatmapLevelData*", modifiers: "", def_value: None }]
  constexpr LoadBeatmapLevelDataResult(::System::Nullable_1<::GlobalNamespace::LoadBeatmapLevelDataResult_ErrorType> errorType, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15003 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field errorType, offset: 0x0, size: 0x8, def value: None
  ::System::Nullable_1<::GlobalNamespace::LoadBeatmapLevelDataResult_ErrorType> errorType;

  /// @brief Field beatmapLevelData, offset: 0x8, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LoadBeatmapLevelDataResult, errorType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LoadBeatmapLevelDataResult, beatmapLevelData) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LoadBeatmapLevelDataResult, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LoadBeatmapLevelDataResult_ErrorType, "", "LoadBeatmapLevelDataResult/ErrorType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LoadBeatmapLevelDataResult, "", "LoadBeatmapLevelDataResult");
