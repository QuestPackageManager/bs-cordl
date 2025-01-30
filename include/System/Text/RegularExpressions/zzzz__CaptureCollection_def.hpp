#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/CaptureCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
// Dependencies System.Object
namespace System::Text::RegularExpressions {
// Is value type: false
// CS Name: System.Text.RegularExpressions.CaptureCollection
class CORDL_TYPE CaptureCollection : public ::System::Object {
public:
  // Declarations
  /// @brief Field _capcount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__capcount, put = __cordl_internal_set__capcount)) int32_t _capcount;

  /// @brief Field _captures, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__captures,
                      put = __cordl_internal_set__captures)) ::ArrayW<::System::Text::RegularExpressions::Capture*, ::Array<::System::Text::RegularExpressions::Capture*>*>
      _captures;

  /// @brief Field _group, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__group, put = __cordl_internal_set__group)) ::System::Text::RegularExpressions::Group* _group;

  constexpr int32_t const& __cordl_internal_get__capcount() const;

  constexpr int32_t& __cordl_internal_get__capcount();

  constexpr ::ArrayW<::System::Text::RegularExpressions::Capture*, ::Array<::System::Text::RegularExpressions::Capture*>*> const& __cordl_internal_get__captures() const;

  constexpr ::ArrayW<::System::Text::RegularExpressions::Capture*, ::Array<::System::Text::RegularExpressions::Capture*>*>& __cordl_internal_get__captures();

  constexpr ::System::Text::RegularExpressions::Group* const& __cordl_internal_get__group() const;

  constexpr ::System::Text::RegularExpressions::Group*& __cordl_internal_get__group();

  constexpr void __cordl_internal_set__capcount(int32_t value);

  constexpr void __cordl_internal_set__captures(::ArrayW<::System::Text::RegularExpressions::Capture*, ::Array<::System::Text::RegularExpressions::Capture*>*> value);

  constexpr void __cordl_internal_set__group(::System::Text::RegularExpressions::Group* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CaptureCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CaptureCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CaptureCollection(CaptureCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CaptureCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CaptureCollection(CaptureCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9219 };

  /// @brief Field _group, offset: 0x10, size: 0x8, def value: None
  ::System::Text::RegularExpressions::Group* ____group;

  /// @brief Field _capcount, offset: 0x18, size: 0x4, def value: None
  int32_t ____capcount;

  /// @brief Field _captures, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Text::RegularExpressions::Capture*, ::Array<::System::Text::RegularExpressions::Capture*>*> ____captures;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::RegularExpressions::CaptureCollection, ____group) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::CaptureCollection, ____capcount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::CaptureCollection, ____captures) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::CaptureCollection, 0x28>, "Size mismatch!");

} // namespace System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::CaptureCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::CaptureCollection*, "System.Text.RegularExpressions", "CaptureCollection");
