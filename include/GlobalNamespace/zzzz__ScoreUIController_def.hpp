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
class __ScoreUIController__InitData;
}
namespace System::Text {
class StringBuilder;
}
namespace GlobalNamespace {
struct __ScoreUIController__ScoreDisplayType;
}
namespace GlobalNamespace {
class IScoreController;
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5150))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ScoreUIController__ScoreDisplayType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScoreUIController__ScoreDisplayType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field MultipliedScore value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__ScoreUIController__ScoreDisplayType const MultipliedScore;

  /// @brief Field ModifiedScore value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__ScoreUIController__ScoreDisplayType const ModifiedScore;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5150)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5149))
// CS Name: ::ScoreUIController::InitData*
class CORDL_TYPE __ScoreUIController__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field scoreDisplayType, offset 0x10, size 0x4
  __declspec(property(get = __get_scoreDisplayType, put = __set_scoreDisplayType))::GlobalNamespace::__ScoreUIController__ScoreDisplayType scoreDisplayType;

  constexpr ::GlobalNamespace::__ScoreUIController__ScoreDisplayType& __get_scoreDisplayType();

  constexpr ::GlobalNamespace::__ScoreUIController__ScoreDisplayType const& __get_scoreDisplayType() const;

  constexpr void __set_scoreDisplayType(::GlobalNamespace::__ScoreUIController__ScoreDisplayType value);

  static inline ::GlobalNamespace::__ScoreUIController__InitData* New_ctor(::GlobalNamespace::__ScoreUIController__ScoreDisplayType scoreDisplayType);

  /// @brief Method .ctor addr 0x20e13d8 size 0x28 virtual false final false
  inline void _ctor(::GlobalNamespace::__ScoreUIController__ScoreDisplayType scoreDisplayType);

  // Ctor Parameters [CppParam { name: "", ty: "__ScoreUIController__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ScoreUIController__InitData(__ScoreUIController__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ScoreUIController__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ScoreUIController__InitData(__ScoreUIController__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScoreUIController__InitData();

public:
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5151))
// CS Name: ::ScoreUIController*
class CORDL_TYPE ScoreUIController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ScoreDisplayType = ::GlobalNamespace::__ScoreUIController__ScoreDisplayType;

  using InitData = ::GlobalNamespace::__ScoreUIController__InitData;

  /// @brief Field _scoreText, offset 0x18, size 0x8
  __declspec(property(get = __get__scoreText, put = __set__scoreText))::TMPro::TextMeshProUGUI* _scoreText;

  /// @brief Field _initData, offset 0x20, size 0x8
  __declspec(property(get = __get__initData, put = __set__initData))::GlobalNamespace::__ScoreUIController__InitData* _initData;

  /// @brief Field _scoreController, offset 0x28, size 0x8
  __declspec(property(get = __get__scoreController, put = __set__scoreController))::GlobalNamespace::IScoreController* _scoreController;

  /// @brief Field _stringBuilder, offset 0x30, size 0x8
  __declspec(property(get = __get__stringBuilder, put = __set__stringBuilder))::System::Text::StringBuilder* _stringBuilder;

  constexpr ::TMPro::TextMeshProUGUI*& __get__scoreText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__scoreText() const;

  constexpr void __set__scoreText(::TMPro::TextMeshProUGUI* value);

  constexpr ::GlobalNamespace::__ScoreUIController__InitData*& __get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ScoreUIController__InitData*> const& __get__initData() const;

  constexpr void __set__initData(::GlobalNamespace::__ScoreUIController__InitData* value);

  constexpr ::GlobalNamespace::IScoreController*& __get__scoreController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IScoreController*> const& __get__scoreController() const;

  constexpr void __set__scoreController(::GlobalNamespace::IScoreController* value);

  constexpr ::System::Text::StringBuilder*& __get__stringBuilder();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __get__stringBuilder() const;

  constexpr void __set__stringBuilder(::System::Text::StringBuilder* value);

  /// @brief Method Start addr 0x20e0dcc size 0x78 virtual false final false
  inline void Start();

  /// @brief Method OnEnable addr 0x20e11bc size 0x4 virtual false final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x20e11c0 size 0x4 virtual false final false
  inline void OnDisable();

  /// @brief Method RegisterForEvents addr 0x20e0e44 size 0x198 virtual false final false
  inline void RegisterForEvents();

  /// @brief Method UnregisterFromEvents addr 0x20e11c4 size 0x108 virtual false final false
  inline void UnregisterFromEvents();

  /// @brief Method HandleScoreDidChangeRealtime addr 0x20e12cc size 0x4 virtual false final false
  inline void HandleScoreDidChangeRealtime(int32_t multipliedScore, int32_t modifiedScore);

  /// @brief Method UpdateScore addr 0x20e0fdc size 0x1e0 virtual false final false
  inline void UpdateScore(int32_t multipliedScore, int32_t modifiedScore);

  /// @brief Method Append000Number addr 0x20e12d0 size 0x98 virtual false final false
  static inline void Append000Number(::System::Text::StringBuilder* stringBuilder, int32_t number);

  static inline ::GlobalNamespace::ScoreUIController* New_ctor();

  /// @brief Method .ctor addr 0x20e1368 size 0x70 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ScoreUIController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScoreUIController(ScoreUIController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScoreUIController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScoreUIController(ScoreUIController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScoreUIController();

public:
  /// @brief Field _scoreText, offset: 0x18, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____scoreText;

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
