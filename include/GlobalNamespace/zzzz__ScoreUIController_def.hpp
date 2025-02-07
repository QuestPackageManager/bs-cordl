#pragma once
// IWYU pragma private; include "GlobalNamespace/ScoreUIController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScoreUIController)
namespace GlobalNamespace {
class IScoreController;
}
namespace GlobalNamespace {
class ScoreUIController_InitData;
}
namespace GlobalNamespace {
struct ScoreUIController_ScoreDisplayType;
}
namespace System::Text {
class StringBuilder;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
struct ScoreUIController_ScoreDisplayType;
}
namespace GlobalNamespace {
class ScoreUIController;
}
namespace GlobalNamespace {
class ScoreUIController_InitData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScoreUIController_ScoreDisplayType);
MARK_REF_PTR_T(::GlobalNamespace::ScoreUIController);
MARK_REF_PTR_T(::GlobalNamespace::ScoreUIController_InitData);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: ScoreUIController/ScoreDisplayType
struct CORDL_TYPE ScoreUIController_ScoreDisplayType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ScoreUIController_ScoreDisplayType_Unwrapped
  enum struct __ScoreUIController_ScoreDisplayType_Unwrapped : int32_t {
    __E_MultipliedScore = static_cast<int32_t>(0x0),
    __E_ModifiedScore = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ScoreUIController_ScoreDisplayType_Unwrapped() const noexcept {
    return static_cast<__ScoreUIController_ScoreDisplayType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScoreUIController_ScoreDisplayType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ScoreUIController_ScoreDisplayType(int32_t value__) noexcept;

  /// @brief Field ModifiedScore value: I32(1)
  static ::GlobalNamespace::ScoreUIController_ScoreDisplayType const ModifiedScore;

  /// @brief Field MultipliedScore value: I32(0)
  static ::GlobalNamespace::ScoreUIController_ScoreDisplayType const MultipliedScore;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4421 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScoreUIController_ScoreDisplayType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScoreUIController_ScoreDisplayType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ScoreUIController::ScoreDisplayType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScoreUIController/InitData
class CORDL_TYPE ScoreUIController_InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field scoreDisplayType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_scoreDisplayType, put = __cordl_internal_set_scoreDisplayType)) ::GlobalNamespace::ScoreUIController_ScoreDisplayType scoreDisplayType;

  static inline ::GlobalNamespace::ScoreUIController_InitData* New_ctor(::GlobalNamespace::ScoreUIController_ScoreDisplayType scoreDisplayType);

  constexpr ::GlobalNamespace::ScoreUIController_ScoreDisplayType const& __cordl_internal_get_scoreDisplayType() const;

  constexpr ::GlobalNamespace::ScoreUIController_ScoreDisplayType& __cordl_internal_get_scoreDisplayType();

  constexpr void __cordl_internal_set_scoreDisplayType(::GlobalNamespace::ScoreUIController_ScoreDisplayType value);

  /// @brief Method .ctor, addr 0x3bae44c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ScoreUIController_ScoreDisplayType scoreDisplayType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScoreUIController_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScoreUIController_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScoreUIController_InitData(ScoreUIController_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScoreUIController_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScoreUIController_InitData(ScoreUIController_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4420 };

  /// @brief Field scoreDisplayType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::ScoreUIController_ScoreDisplayType ___scoreDisplayType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScoreUIController_InitData, ___scoreDisplayType) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScoreUIController_InitData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScoreUIController
class CORDL_TYPE ScoreUIController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::ScoreUIController_InitData;

  using ScoreDisplayType = ::GlobalNamespace::ScoreUIController_ScoreDisplayType;

  /// @brief Field _initData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::ScoreUIController_InitData* _initData;

  /// @brief Field _scoreController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreController, put = __cordl_internal_set__scoreController)) ::GlobalNamespace::IScoreController* _scoreController;

  /// @brief Field _scoreText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreText, put = __cordl_internal_set__scoreText)) ::UnityW<::TMPro::TextMeshProUGUI> _scoreText;

  /// @brief Field _stringBuilder, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__stringBuilder, put = __cordl_internal_set__stringBuilder)) ::System::Text::StringBuilder* _stringBuilder;

  /// @brief Method Append000Number, addr 0x3bae384, size 0x60, virtual false, abstract: false, final false
  static inline void Append000Number(::System::Text::StringBuilder* stringBuilder, int32_t number);

  /// @brief Method HandleScoreDidChangeRealtime, addr 0x3bae20c, size 0x4, virtual false, abstract: false, final false
  inline void HandleScoreDidChangeRealtime(int32_t multipliedScore, int32_t modifiedScore);

  static inline ::GlobalNamespace::ScoreUIController* New_ctor();

  /// @brief Method OnDisable, addr 0x3bae108, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3bae104, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method RegisterForEvents, addr 0x3badf50, size 0x190, virtual false, abstract: false, final false
  inline void RegisterForEvents();

  /// @brief Method Start, addr 0x3badee0, size 0x70, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method UnregisterFromEvents, addr 0x3bae10c, size 0x100, virtual false, abstract: false, final false
  inline void UnregisterFromEvents();

  /// @brief Method UpdateScore, addr 0x3bae210, size 0x174, virtual false, abstract: false, final false
  inline void UpdateScore(int32_t displayScore);

  /// @brief Method UpdateScore, addr 0x3bae0e0, size 0x24, virtual false, abstract: false, final false
  inline void UpdateScore(int32_t multipliedScore, int32_t modifiedScore);

  constexpr ::GlobalNamespace::ScoreUIController_InitData* const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::ScoreUIController_InitData*& __cordl_internal_get__initData();

  constexpr ::GlobalNamespace::IScoreController* const& __cordl_internal_get__scoreController() const;

  constexpr ::GlobalNamespace::IScoreController*& __cordl_internal_get__scoreController();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__scoreText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__scoreText();

  constexpr ::System::Text::StringBuilder* const& __cordl_internal_get__stringBuilder() const;

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get__stringBuilder();

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::ScoreUIController_InitData* value);

  constexpr void __cordl_internal_set__scoreController(::GlobalNamespace::IScoreController* value);

  constexpr void __cordl_internal_set__scoreText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__stringBuilder(::System::Text::StringBuilder* value);

  /// @brief Method .ctor, addr 0x3bae3e4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScoreUIController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScoreUIController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScoreUIController(ScoreUIController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScoreUIController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScoreUIController(ScoreUIController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4422 };

  /// @brief Field kMaxNumberOfDigits offset 0xffffffff size 0x4
  static constexpr int32_t kMaxNumberOfDigits{ static_cast<int32_t>(0x9) };

  /// @brief Field _scoreText, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____scoreText;

  /// @brief Field _scoreController, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IScoreController* ____scoreController;

  /// @brief Field _initData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ScoreUIController_InitData* ____initData;

  /// @brief Field _stringBuilder, offset: 0x38, size: 0x8, def value: None
  ::System::Text::StringBuilder* ____stringBuilder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScoreUIController, ____scoreText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreUIController, ____scoreController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreUIController, ____initData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreUIController, ____stringBuilder) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScoreUIController, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScoreUIController_ScoreDisplayType, "", "ScoreUIController/ScoreDisplayType");
NEED_NO_BOX(::GlobalNamespace::ScoreUIController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScoreUIController*, "", "ScoreUIController");
NEED_NO_BOX(::GlobalNamespace::ScoreUIController_InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScoreUIController_InitData*, "", "ScoreUIController/InitData");
