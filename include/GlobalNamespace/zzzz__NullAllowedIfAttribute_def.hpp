#pragma once
// IWYU pragma private; include "GlobalNamespace\NullAllowedIfAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ComparisonOperation_def.hpp"
#include "GlobalNamespace/zzzz__NullAllowedAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NullAllowedIfAttribute)
namespace GlobalNamespace {
struct ComparisonOperation;
}
namespace GlobalNamespace {
struct NullAllowedContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class NullAllowedIfAttribute;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NullAllowedIfAttribute*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NullAllowedIfAttribute*, "", "NullAllowedIfAttribute");
// Dependencies ComparisonOperation, NullAllowedAttribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: NullAllowedIfAttribute
class CORDL_TYPE NullAllowedIfAttribute : public ::GlobalNamespace::NullAllowedAttribute {
public:
  // Declarations
  /// @brief Field _comparisonOperation, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__comparisonOperation, put = __cordl_internal_set__comparisonOperation)) ::GlobalNamespace::ComparisonOperation _comparisonOperation;

  /// @brief Field _valueToCompare, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__valueToCompare, put = __cordl_internal_set__valueToCompare)) ::System::Object* _valueToCompare;

  /// @brief Field propertyName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_propertyName, put = __cordl_internal_set_propertyName)) ::StringW propertyName;

  /// @brief Method IsNullAllowedForValue, addr 0x330b4b4, size 0x124, virtual false, abstract: false, final false
  inline bool IsNullAllowedForValue(::System::Object* value, ::GlobalNamespace::NullAllowedContext context);

  static inline ::GlobalNamespace::NullAllowedIfAttribute* New_ctor(::StringW propertyName, ::GlobalNamespace::ComparisonOperation comparisonOperation, ::System::Object* valueToCompare,
                                                                    ::GlobalNamespace::NullAllowedContext context);

  static inline ::GlobalNamespace::NullAllowedIfAttribute* New_ctor(::StringW propertyName, ::System::Object* equalsTo, ::GlobalNamespace::NullAllowedContext context);

  constexpr ::GlobalNamespace::ComparisonOperation const& __cordl_internal_get__comparisonOperation() const;

  constexpr ::GlobalNamespace::ComparisonOperation& __cordl_internal_get__comparisonOperation();

  constexpr ::System::Object* const& __cordl_internal_get__valueToCompare() const;

  constexpr ::System::Object*& __cordl_internal_get__valueToCompare();

  constexpr ::StringW const& __cordl_internal_get_propertyName() const;

  constexpr ::StringW& __cordl_internal_get_propertyName();

  constexpr void __cordl_internal_set__comparisonOperation(::GlobalNamespace::ComparisonOperation value);

  constexpr void __cordl_internal_set__valueToCompare(::System::Object* value);

  constexpr void __cordl_internal_set_propertyName(::StringW value);

  /// @brief Method .ctor, addr 0x330b4a0, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::StringW propertyName, ::GlobalNamespace::ComparisonOperation comparisonOperation, ::System::Object* valueToCompare, ::GlobalNamespace::NullAllowedContext context);

  /// @brief Method .ctor, addr 0x330b48c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::StringW propertyName, ::System::Object* equalsTo, ::GlobalNamespace::NullAllowedContext context);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NullAllowedIfAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NullAllowedIfAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NullAllowedIfAttribute(NullAllowedIfAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NullAllowedIfAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NullAllowedIfAttribute(NullAllowedIfAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23512 };

  /// @brief Field propertyName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___propertyName;

  /// @brief Field _valueToCompare, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ____valueToCompare;

  /// @brief Field _comparisonOperation, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::ComparisonOperation ____comparisonOperation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NullAllowedIfAttribute, ___propertyName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NullAllowedIfAttribute, ____valueToCompare) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NullAllowedIfAttribute, ____comparisonOperation) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NullAllowedIfAttribute) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
