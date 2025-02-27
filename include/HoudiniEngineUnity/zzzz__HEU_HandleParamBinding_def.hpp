#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_HandleParamBinding.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_HandleParamBinding)
namespace HoudiniEngineUnity {
struct HEU_HandleParamBinding_HEU_HandleParamType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HEU_HandleParamBinding_HEU_HandleParamType;
}
namespace HoudiniEngineUnity {
class HEU_HandleParamBinding;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HEU_HandleParamBinding_HEU_HandleParamType);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_HandleParamBinding);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HEU_HandleParamBinding/HEU_HandleParamType
struct CORDL_TYPE HEU_HandleParamBinding_HEU_HandleParamType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HEU_HandleParamBinding_HEU_HandleParamType_Unwrapped
  enum struct __HEU_HandleParamBinding_HEU_HandleParamType_Unwrapped : int32_t {
    __E_TRANSLATE = static_cast<int32_t>(0x0),
    __E_ROTATE = static_cast<int32_t>(0x1),
    __E_SCALE = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HEU_HandleParamBinding_HEU_HandleParamType_Unwrapped() const noexcept {
    return static_cast<__HEU_HandleParamBinding_HEU_HandleParamType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_HandleParamBinding_HEU_HandleParamType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HEU_HandleParamBinding_HEU_HandleParamType(int32_t value__) noexcept;

  /// @brief Field ROTATE value: I32(1)
  static ::HoudiniEngineUnity::HEU_HandleParamBinding_HEU_HandleParamType const ROTATE;

  /// @brief Field SCALE value: I32(2)
  static ::HoudiniEngineUnity::HEU_HandleParamBinding_HEU_HandleParamType const SCALE;

  /// @brief Field TRANSLATE value: I32(0)
  static ::HoudiniEngineUnity::HEU_HandleParamBinding_HEU_HandleParamType const TRANSLATE;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11670 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_HandleParamBinding_HEU_HandleParamType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_HandleParamBinding_HEU_HandleParamType, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies HoudiniEngineUnity.HEU_HandleParamBinding::HEU_HandleParamType, HoudiniEngineUnity.IEquivable`1<T>, System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_HandleParamBinding
class CORDL_TYPE HEU_HandleParamBinding : public ::System::Object {
public:
  // Declarations
  using HEU_HandleParamType = ::HoudiniEngineUnity::HEU_HandleParamBinding_HEU_HandleParamType;

  /// @brief Field _bDisabled, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__bDisabled, put = __cordl_internal_set__bDisabled)) bool _bDisabled;

  /// @brief Field _boundChannels, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__boundChannels, put = __cordl_internal_set__boundChannels)) ::ArrayW<bool, ::Array<bool>*> _boundChannels;

  /// @brief Field _paramName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__paramName, put = __cordl_internal_set__paramName)) ::StringW _paramName;

  /// @brief Field _paramType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__paramType, put = __cordl_internal_set__paramType)) ::HoudiniEngineUnity::HEU_HandleParamBinding_HEU_HandleParamType _paramType;

  /// @brief Field _parmID, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__parmID, put = __cordl_internal_set__parmID)) int32_t _parmID;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_HandleParamBinding*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_HandleParamBinding*>*() noexcept;

  /// @brief Method IsEquivalentTo, addr 0x3a560b8, size 0x200, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_HandleParamBinding* other);

  static inline ::HoudiniEngineUnity::HEU_HandleParamBinding* New_ctor();

  constexpr bool const& __cordl_internal_get__bDisabled() const;

  constexpr bool& __cordl_internal_get__bDisabled();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get__boundChannels() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get__boundChannels();

  constexpr ::StringW const& __cordl_internal_get__paramName() const;

  constexpr ::StringW& __cordl_internal_get__paramName();

  constexpr ::HoudiniEngineUnity::HEU_HandleParamBinding_HEU_HandleParamType const& __cordl_internal_get__paramType() const;

  constexpr ::HoudiniEngineUnity::HEU_HandleParamBinding_HEU_HandleParamType& __cordl_internal_get__paramType();

  constexpr int32_t const& __cordl_internal_get__parmID() const;

  constexpr int32_t& __cordl_internal_get__parmID();

  constexpr void __cordl_internal_set__bDisabled(bool value);

  constexpr void __cordl_internal_set__boundChannels(::ArrayW<bool, ::Array<bool>*> value);

  constexpr void __cordl_internal_set__paramName(::StringW value);

  constexpr void __cordl_internal_set__paramType(::HoudiniEngineUnity::HEU_HandleParamBinding_HEU_HandleParamType value);

  constexpr void __cordl_internal_set__parmID(int32_t value);

  /// @brief Method .ctor, addr 0x3a551a4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_HandleParamBinding*>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_HandleParamBinding*>* i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__HEU_HandleParamBinding__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_HandleParamBinding();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_HandleParamBinding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_HandleParamBinding(HEU_HandleParamBinding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_HandleParamBinding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_HandleParamBinding(HEU_HandleParamBinding const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11671 };

  /// @brief Field _paramType, offset: 0x10, size: 0x4, def value: None
  ::HoudiniEngineUnity::HEU_HandleParamBinding_HEU_HandleParamType ____paramType;

  /// @brief Field _parmID, offset: 0x14, size: 0x4, def value: None
  int32_t ____parmID;

  /// @brief Field _paramName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____paramName;

  /// @brief Field _bDisabled, offset: 0x20, size: 0x1, def value: None
  bool ____bDisabled;

  /// @brief Field _boundChannels, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ____boundChannels;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_HandleParamBinding, ____paramType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HandleParamBinding, ____parmID) == 0x14, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HandleParamBinding, ____paramName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HandleParamBinding, ____bDisabled) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_HandleParamBinding, ____boundChannels) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_HandleParamBinding, 0x30>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_HandleParamBinding_HEU_HandleParamType, "HoudiniEngineUnity", "HEU_HandleParamBinding/HEU_HandleParamType");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_HandleParamBinding);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_HandleParamBinding*, "HoudiniEngineUnity", "HEU_HandleParamBinding");
