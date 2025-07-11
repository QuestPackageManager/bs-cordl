#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/Group.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/RegularExpressions/zzzz__Capture_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Group)
namespace System::Text::RegularExpressions {
class CaptureCollection;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class Group;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::Group);
// Dependencies System.Text.RegularExpressions.Capture
namespace System::Text::RegularExpressions {
// Is value type: false
// CS Name: System.Text.RegularExpressions.Group
class CORDL_TYPE Group : public ::System::Text::RegularExpressions::Capture {
public:
  // Declarations
  __declspec(property(get = get_Success)) bool Success;

  /// @brief Field <Name>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Field _capcoll, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__capcoll, put = __cordl_internal_set__capcoll)) ::System::Text::RegularExpressions::CaptureCollection* _capcoll;

  /// @brief Field _capcount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__capcount, put = __cordl_internal_set__capcount)) int32_t _capcount;

  /// @brief Field _caps, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__caps, put = __cordl_internal_set__caps)) ::ArrayW<int32_t, ::Array<int32_t>*> _caps;

  /// @brief Field s_emptyGroup, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_emptyGroup, put = setStaticF_s_emptyGroup)) ::System::Text::RegularExpressions::Group* s_emptyGroup;

  static inline ::System::Text::RegularExpressions::Group* New_ctor();

  static inline ::System::Text::RegularExpressions::Group* New_ctor(::StringW text, ::ArrayW<int32_t, ::Array<int32_t>*> caps, int32_t capcount, ::StringW name);

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr ::System::Text::RegularExpressions::CaptureCollection* const& __cordl_internal_get__capcoll() const;

  constexpr ::System::Text::RegularExpressions::CaptureCollection*& __cordl_internal_get__capcoll();

  constexpr int32_t const& __cordl_internal_get__capcount() const;

  constexpr int32_t& __cordl_internal_get__capcount();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__caps() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__caps();

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__capcoll(::System::Text::RegularExpressions::CaptureCollection* value);

  constexpr void __cordl_internal_set__capcount(int32_t value);

  constexpr void __cordl_internal_set__caps(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method .ctor, addr 0x4410a80, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x44108d0, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::StringW text, ::ArrayW<int32_t, ::Array<int32_t>*> caps, int32_t capcount, ::StringW name);

  static inline ::System::Text::RegularExpressions::Group* getStaticF_s_emptyGroup();

  /// @brief Method get_Success, addr 0x441096c, size 0x10, virtual false, abstract: false, final false
  inline bool get_Success();

  static inline void setStaticF_s_emptyGroup(::System::Text::RegularExpressions::Group* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Group();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Group", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Group(Group&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Group", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Group(Group const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9223 };

  /// @brief Field _caps, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____caps;

  /// @brief Field _capcount, offset: 0x28, size: 0x4, def value: None
  int32_t ____capcount;

  /// @brief Field _capcoll, offset: 0x30, size: 0x8, def value: None
  ::System::Text::RegularExpressions::CaptureCollection* ____capcoll;

  /// @brief Field <Name>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::RegularExpressions::Group, ____caps) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Group, ____capcount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Group, ____capcoll) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::Group, ____Name_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::Group, 0x40>, "Size mismatch!");

} // namespace System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::Group);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::Group*, "System.Text.RegularExpressions", "Group");
