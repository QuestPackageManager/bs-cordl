#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExclusiveReference)
namespace System::Text::RegularExpressions {
class RegexRunner;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class ExclusiveReference;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::ExclusiveReference);
// Type: System.Text.RegularExpressions::ExclusiveReference
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text::RegularExpressions {
// Is value type: false
// CS Name: ::System.Text.RegularExpressions::ExclusiveReference*
class CORDL_TYPE ExclusiveReference : public ::System::Object {
public:
  // Declarations
  /// @brief Field _locked, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__locked, put = __cordl_internal_set__locked)) int32_t _locked;

  /// @brief Field _obj, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__obj, put = __cordl_internal_set__obj))::System::Text::RegularExpressions::RegexRunner* _obj;

  /// @brief Field _ref, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ref, put = __cordl_internal_set__ref))::System::Text::RegularExpressions::RegexRunner* _ref;

  /// @brief Method Get, addr 0x2e83e4c, size 0x58, virtual false, abstract: false, final false
  inline ::System::Text::RegularExpressions::RegexRunner* Get();

  static inline ::System::Text::RegularExpressions::ExclusiveReference* New_ctor();

  /// @brief Method Release, addr 0x2e83ea4, size 0xbc, virtual false, abstract: false, final false
  inline void Release(::System::Text::RegularExpressions::RegexRunner* obj);

  constexpr int32_t const& __cordl_internal_get__locked() const;

  constexpr int32_t& __cordl_internal_get__locked();

  constexpr ::System::Text::RegularExpressions::RegexRunner*& __cordl_internal_get__obj();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::RegexRunner*> const& __cordl_internal_get__obj() const;

  constexpr ::System::Text::RegularExpressions::RegexRunner*& __cordl_internal_get__ref();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::RegexRunner*> const& __cordl_internal_get__ref() const;

  constexpr void __cordl_internal_set__locked(int32_t value);

  constexpr void __cordl_internal_set__obj(::System::Text::RegularExpressions::RegexRunner* value);

  constexpr void __cordl_internal_set__ref(::System::Text::RegularExpressions::RegexRunner* value);

  /// @brief Method .ctor, addr 0x2e83f60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExclusiveReference();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExclusiveReference", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExclusiveReference(ExclusiveReference&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExclusiveReference", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExclusiveReference(ExclusiveReference const&) = delete;

  /// @brief Field _ref, offset: 0x10, size: 0x8, def value: None
  ::System::Text::RegularExpressions::RegexRunner* ____ref;

  /// @brief Field _obj, offset: 0x18, size: 0x8, def value: None
  ::System::Text::RegularExpressions::RegexRunner* ____obj;

  /// @brief Field _locked, offset: 0x20, size: 0x4, def value: None
  int32_t ____locked;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::ExclusiveReference, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::ExclusiveReference, ____ref) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::ExclusiveReference, ____obj) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::ExclusiveReference, ____locked) == 0x20, "Offset mismatch!");

} // namespace System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::ExclusiveReference);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::ExclusiveReference*, "System.Text.RegularExpressions", "ExclusiveReference");
