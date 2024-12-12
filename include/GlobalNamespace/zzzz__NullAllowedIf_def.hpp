#pragma once
// IWYU pragma private; include "GlobalNamespace/NullAllowedIf.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ComparisonOperation_def.hpp"
#include "GlobalNamespace/zzzz__NullAllowed_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NullAllowedIf)
namespace GlobalNamespace {
struct ComparisonOperation;
}
namespace GlobalNamespace {
struct NullAllowed_Context;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class NullAllowedIf;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NullAllowedIf);
// Dependencies ComparisonOperation, NullAllowed
namespace GlobalNamespace {
// Is value type: false
// CS Name: NullAllowedIf
class CORDL_TYPE NullAllowedIf : public ::GlobalNamespace::NullAllowed {
public:
  // Declarations
  /// @brief Field _comparisonOperation, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__comparisonOperation, put = __cordl_internal_set__comparisonOperation)) ::GlobalNamespace::ComparisonOperation _comparisonOperation;

  /// @brief Field _valueToCompare, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__valueToCompare, put = __cordl_internal_set__valueToCompare)) ::System::Object* _valueToCompare;

  /// @brief Field propertyName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_propertyName, put = __cordl_internal_set_propertyName)) ::StringW propertyName;

  /// @brief Method IsNullAllowedFor, addr 0x229c21c, size 0xfc, virtual false, abstract: false, final false
  inline bool IsNullAllowedFor(::System::Object* value, ::GlobalNamespace::NullAllowed_Context context);

  static inline ::GlobalNamespace::NullAllowedIf* New_ctor(::StringW propertyName, ::GlobalNamespace::ComparisonOperation comparisonOperation, ::System::Object* valueToCompare,
                                                           ::GlobalNamespace::NullAllowed_Context context);

  static inline ::GlobalNamespace::NullAllowedIf* New_ctor(::StringW propertyName, ::System::Object* equalsTo, ::GlobalNamespace::NullAllowed_Context context);

  constexpr ::GlobalNamespace::ComparisonOperation const& __cordl_internal_get__comparisonOperation() const;

  constexpr ::GlobalNamespace::ComparisonOperation& __cordl_internal_get__comparisonOperation();

  constexpr ::System::Object* const& __cordl_internal_get__valueToCompare() const;

  constexpr ::System::Object*& __cordl_internal_get__valueToCompare();

  constexpr ::StringW const& __cordl_internal_get_propertyName() const;

  constexpr ::StringW& __cordl_internal_get_propertyName();

  constexpr void __cordl_internal_set__comparisonOperation(::GlobalNamespace::ComparisonOperation value);

  constexpr void __cordl_internal_set__valueToCompare(::System::Object* value);

  constexpr void __cordl_internal_set_propertyName(::StringW value);

  /// @brief Method .ctor, addr 0x229c1d8, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::StringW propertyName, ::GlobalNamespace::ComparisonOperation comparisonOperation, ::System::Object* valueToCompare, ::GlobalNamespace::NullAllowed_Context context);

  /// @brief Method .ctor, addr 0x229c198, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::StringW propertyName, ::System::Object* equalsTo, ::GlobalNamespace::NullAllowed_Context context);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NullAllowedIf();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NullAllowedIf", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NullAllowedIf(NullAllowedIf&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NullAllowedIf", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NullAllowedIf(NullAllowedIf const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19151 };

  /// @brief Field propertyName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___propertyName;

  /// @brief Field _valueToCompare, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____valueToCompare;

  /// @brief Field _comparisonOperation, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::ComparisonOperation ____comparisonOperation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NullAllowedIf, ___propertyName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NullAllowedIf, ____valueToCompare) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NullAllowedIf, ____comparisonOperation) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NullAllowedIf, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NullAllowedIf);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NullAllowedIf*, "", "NullAllowedIf");
