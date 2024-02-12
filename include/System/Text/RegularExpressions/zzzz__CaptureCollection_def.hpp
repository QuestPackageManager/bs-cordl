#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CaptureCollection)
namespace System::Text::RegularExpressions {
class Capture;
}
namespace System::Text::RegularExpressions {
class Group;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class CaptureCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::CaptureCollection);
// Type: System.Text.RegularExpressions::CaptureCollection
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6911))
// CS Name: ::System.Text.RegularExpressions::CaptureCollection*
class CORDL_TYPE CaptureCollection : public ::System::Object {
public:
  // Declarations
  /// @brief Field _group, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__group, put = __cordl_internal_set__group))::System::Text::RegularExpressions::Group* _group;

  /// @brief Field _capcount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__capcount, put = __cordl_internal_set__capcount)) int32_t _capcount;

  /// @brief Field _captures, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__captures,
                      put = __cordl_internal_set__captures))::ArrayW<::System::Text::RegularExpressions::Capture*, ::Array<::System::Text::RegularExpressions::Capture*>*> _captures;

  constexpr ::System::Text::RegularExpressions::Group*& __cordl_internal_get__group();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::Group*> const& __cordl_internal_get__group() const;

  constexpr void __cordl_internal_set__group(::System::Text::RegularExpressions::Group* value);

  constexpr int32_t& __cordl_internal_get__capcount();

  constexpr int32_t const& __cordl_internal_get__capcount() const;

  constexpr void __cordl_internal_set__capcount(int32_t value);

  constexpr ::ArrayW<::System::Text::RegularExpressions::Capture*, ::Array<::System::Text::RegularExpressions::Capture*>*>& __cordl_internal_get__captures();

  constexpr ::ArrayW<::System::Text::RegularExpressions::Capture*, ::Array<::System::Text::RegularExpressions::Capture*>*> const& __cordl_internal_get__captures() const;

  constexpr void __cordl_internal_set__captures(::ArrayW<::System::Text::RegularExpressions::Capture*, ::Array<::System::Text::RegularExpressions::Capture*>*> value);

  // Ctor Parameters [CppParam { name: "", ty: "CaptureCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CaptureCollection(CaptureCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CaptureCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CaptureCollection(CaptureCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CaptureCollection();

public:
  /// @brief Field _group, offset: 0x10, size: 0x8, def value: None
  ::System::Text::RegularExpressions::Group* ____group;

  /// @brief Field _capcount, offset: 0x18, size: 0x4, def value: None
  int32_t ____capcount;

  /// @brief Field _captures, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Text::RegularExpressions::Capture*, ::Array<::System::Text::RegularExpressions::Capture*>*> ____captures;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::CaptureCollection, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::CaptureCollection, ____group) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::CaptureCollection, ____capcount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::CaptureCollection, ____captures) == 0x20, "Offset mismatch!");

} // namespace System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::CaptureCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::CaptureCollection*, "System.Text.RegularExpressions", "CaptureCollection");
