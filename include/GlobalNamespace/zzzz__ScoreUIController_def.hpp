#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ScoreUIController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScoreUIController)
namespace GlobalNamespace {
class IScoreController;
}
namespace GlobalNamespace {
class __ScoreUIController__InitData;
}
namespace GlobalNamespace {
struct __ScoreUIController__ScoreDisplayType;
}
namespace System::Text {
class StringBuilder;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
struct __ScoreUIController__ScoreDisplayType;
}
namespace GlobalNamespace {
class ScoreUIController;
}
namespace GlobalNamespace {
class __ScoreUIController__InitData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__ScoreUIController__ScoreDisplayType);
MARK_REF_PTR_T(::GlobalNamespace::ScoreUIController);
MARK_REF_PTR_T(::GlobalNamespace::__ScoreUIController__InitData);
// Type: ::ScoreDisplayType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ScoreUIController::ScoreDisplayType
struct CORDL_TYPE __ScoreUIController__ScoreDisplayType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ScoreUIController__ScoreDisplayType_Unwrapped
  enum struct ____ScoreUIController__ScoreDisplayType_Unwrapped : int32_t {
    __E_MultipliedScore = static_cast<int32_t>(0x0),
    __E_ModifiedScore = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ScoreUIController__ScoreDisplayType_Unwrapped() const noexcept {
    return static_cast<____ScoreUIController__ScoreDisplayType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScoreUIController__ScoreDisplayType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ScoreUIController__ScoreDisplayType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ModifiedScore value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__ScoreUIController__ScoreDisplayType const ModifiedScore;

  /// @brief Field MultipliedScore value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__ScoreUIController__ScoreDisplayType const MultipliedScore;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ScoreUIController__ScoreDisplayType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScoreUIController__ScoreDisplayType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::InitData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ScoreUIController::InitData*
class CORDL_TYPE __ScoreUIController__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field scoreDisplayType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_scoreDisplayType, put = __cordl_internal_set_scoreDisplayType))::GlobalNamespace::__ScoreUIController__ScoreDisplayType scoreDisplayType;

  static inline ::GlobalNamespace::__ScoreUIController__InitData* New_ctor(::GlobalNamespace::__ScoreUIController__ScoreDisplayType scoreDisplayType);

  constexpr ::GlobalNamespace::__ScoreUIController__ScoreDisplayType const& __cordl_internal_get_scoreDisplayType() const;

  constexpr ::GlobalNamespace::__ScoreUIController__ScoreDisplayType& __cordl_internal_get_scoreDisplayType();

  constexpr void __cordl_internal_set_scoreDisplayType(::GlobalNamespace::__ScoreUIController__ScoreDisplayType value);

  /// @brief Method .ctor, addr 0x244eb00, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__ScoreUIController__ScoreDisplayType scoreDisplayType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScoreUIController__InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ScoreUIController__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScoreUIController__InitData(__ScoreUIController__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScoreUIController__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScoreUIController__InitData(__ScoreUIController__InitData const&) = delete;

  /// @brief Field scoreDisplayType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__ScoreUIController__ScoreDisplayType ___scoreDisplayType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ScoreUIController__InitData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ScoreUIController__InitData, ___scoreDisplayType) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ScoreUIController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ScoreUIController*
class CORDL_TYPE ScoreUIController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__ScoreUIController__InitData;

  using ScoreDisplayType = ::GlobalNamespace::__ScoreUIController__ScoreDisplayType;

  /// @brief Field _initData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData))::GlobalNamespace::__ScoreUIController__InitData* _initData;

  /// @brief Field _scoreController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreController, put = __cordl_internal_set__scoreController))::GlobalNamespace::IScoreController* _scoreController;

  /// @brief Field _scoreText, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreText, put = __cordl_internal_set__scoreText))::UnityW<::TMPro::TextMeshProUGUI> _scoreText;

  /// @brief Field _stringBuilder, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__stringBuilder, put = __cordl_internal_set__stringBuilder))::System::Text::StringBuilder* _stringBuilder;

  /// @brief Method Append000Number, addr 0x244ea30, size 0x60, virtual false, abstract: false, final false
  static inline void Append000Number(::System::Text::StringBuilder* stringBuilder, int32_t number);

  /// @brief Method HandleScoreDidChangeRealtime, addr 0x244ea2c, size 0x4, virtual false, abstract: false, final false
  inline void HandleScoreDidChangeRealtime(int32_t multipliedScore, int32_t modifiedScore);

  static inline ::GlobalNamespace::ScoreUIController* New_ctor();

  /// @brief Method OnDisable, addr 0x244e920, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x244e91c, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method RegisterForEvents, addr 0x244e600, size 0x198, virtual false, abstract: false, final false
  inline void RegisterForEvents();

  /// @brief Method Start, addr 0x244e588, size 0x78, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method UnregisterFromEvents, addr 0x244e924, size 0x108, virtual false, abstract: false, final false
  inline void UnregisterFromEvents();

  /// @brief Method UpdateScore, addr 0x244e798, size 0x184, virtual false, abstract: false, final false
  inline void UpdateScore(int32_t multipliedScore, int32_t modifiedScore);

  constexpr ::GlobalNamespace::__ScoreUIController__InitData*& __cordl_internal_get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ScoreUIController__InitData*> const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::IScoreController*& __cordl_internal_get__scoreController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IScoreController*> const& __cordl_internal_get__scoreController() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__scoreText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__scoreText();

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get__stringBuilder();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __cordl_internal_get__stringBuilder() const;

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::__ScoreUIController__InitData* value);

  constexpr void __cordl_internal_set__scoreController(::GlobalNamespace::IScoreController* value);

  constexpr void __cordl_internal_set__scoreText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__stringBuilder(::System::Text::StringBuilder* value);

  /// @brief Method .ctor, addr 0x244ea90, size 0x70, virtual false, abstract: false, final false
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

  /// @brief Field _scoreText, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____scoreText;

  /// @brief Field _initData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__ScoreUIController__InitData* ____initData;

  /// @brief Field _scoreController, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IScoreController* ____scoreController;

  /// @brief Field _stringBuilder, offset: 0x30, size: 0x8, def value: None
  ::System::Text::StringBuilder* ____stringBuilder;

  /// @brief Field kMaxNumberOfDigits offset 0xffffffff size 0x4
  static constexpr int32_t kMaxNumberOfDigits{ static_cast<int32_t>(0x9) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScoreUIController, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreUIController, ____scoreText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreUIController, ____initData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreUIController, ____scoreController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreUIController, ____stringBuilder) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ScoreUIController__ScoreDisplayType, "", "ScoreUIController/ScoreDisplayType");
NEED_NO_BOX(::GlobalNamespace::ScoreUIController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScoreUIController*, "", "ScoreUIController");
NEED_NO_BOX(::GlobalNamespace::__ScoreUIController__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ScoreUIController__InitData*, "", "ScoreUIController/InitData");
