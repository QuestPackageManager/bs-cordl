#pragma once
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
namespace System {
class Object;
}
namespace GlobalNamespace {
struct __NullAllowed__Context;
}
// Forward declare root types
namespace GlobalNamespace {
class NullAllowedIf;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NullAllowedIf);
// Type: ::NullAllowedIf
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16247)), TypeDefinitionIndex(TypeDefinitionIndex(16252))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16253))
// CS Name: ::NullAllowedIf*
class CORDL_TYPE NullAllowedIf : public ::GlobalNamespace::NullAllowed {
public:
  // Declarations
  /// @brief Field propertyName, offset 0x18, size 0x8
  __declspec(property(get = __get_propertyName, put = __set_propertyName))::StringW propertyName;

  /// @brief Field _valueToCompare, offset 0x20, size 0x8
  __declspec(property(get = __get__valueToCompare, put = __set__valueToCompare))::System::Object* _valueToCompare;

  /// @brief Field _comparisonOperation, offset 0x28, size 0x4
  __declspec(property(get = __get__comparisonOperation, put = __set__comparisonOperation))::GlobalNamespace::ComparisonOperation _comparisonOperation;

  constexpr ::StringW& __get_propertyName();

  constexpr ::StringW const& __get_propertyName() const;

  constexpr void __set_propertyName(::StringW value);

  constexpr ::System::Object*& __get__valueToCompare();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__valueToCompare() const;

  constexpr void __set__valueToCompare(::System::Object* value);

  constexpr ::GlobalNamespace::ComparisonOperation& __get__comparisonOperation();

  constexpr ::GlobalNamespace::ComparisonOperation const& __get__comparisonOperation() const;

  constexpr void __set__comparisonOperation(::GlobalNamespace::ComparisonOperation value);

  static inline ::GlobalNamespace::NullAllowedIf* New_ctor(::StringW propertyName, ::System::Object* equalsTo, ::GlobalNamespace::__NullAllowed__Context context);

  /// @brief Method .ctor addr 0x21010fc size 0x40 virtual false final false
  inline void _ctor(::StringW propertyName, ::System::Object* equalsTo, ::GlobalNamespace::__NullAllowed__Context context);

  static inline ::GlobalNamespace::NullAllowedIf* New_ctor(::StringW propertyName, ::GlobalNamespace::ComparisonOperation comparisonOperation, ::System::Object* valueToCompare,
                                                           ::GlobalNamespace::__NullAllowed__Context context);

  /// @brief Method .ctor addr 0x210113c size 0x44 virtual false final false
  inline void _ctor(::StringW propertyName, ::GlobalNamespace::ComparisonOperation comparisonOperation, ::System::Object* valueToCompare, ::GlobalNamespace::__NullAllowed__Context context);

  /// @brief Method IsNullAllowedFor addr 0x2101180 size 0x108 virtual false final false
  inline bool IsNullAllowedFor(::System::Object* value, ::GlobalNamespace::__NullAllowed__Context context);

  // Ctor Parameters [CppParam { name: "", ty: "NullAllowedIf", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NullAllowedIf(NullAllowedIf&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NullAllowedIf", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NullAllowedIf(NullAllowedIf const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NullAllowedIf();

public:
  /// @brief Field propertyName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___propertyName;

  /// @brief Field _valueToCompare, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____valueToCompare;

  /// @brief Field _comparisonOperation, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::ComparisonOperation ____comparisonOperation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NullAllowedIf, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NullAllowedIf);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NullAllowedIf*, "", "NullAllowedIf");
