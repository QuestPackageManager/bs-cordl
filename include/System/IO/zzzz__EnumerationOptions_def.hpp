#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__FileAttributes_def.hpp"
#include "System/IO/zzzz__MatchCasing_def.hpp"
#include "System/IO/zzzz__MatchType_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EnumerationOptions)
namespace System::IO {
struct FileAttributes;
}
namespace System::IO {
struct MatchCasing;
}
namespace System::IO {
struct MatchType;
}
namespace System::IO {
struct SearchOption;
}
// Forward declare root types
namespace System::IO {
class EnumerationOptions;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::EnumerationOptions);
// Type: System.IO::EnumerationOptions
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// CS Name: ::System.IO::EnumerationOptions*
class CORDL_TYPE EnumerationOptions : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AttributesToSkip, put = set_AttributesToSkip))::System::IO::FileAttributes AttributesToSkip;

  __declspec(property(get = get_IgnoreInaccessible, put = set_IgnoreInaccessible)) bool IgnoreInaccessible;

  __declspec(property(get = get_MatchCasing))::System::IO::MatchCasing MatchCasing;

  __declspec(property(get = get_MatchType, put = set_MatchType))::System::IO::MatchType MatchType;

  __declspec(property(get = get_RecurseSubdirectories, put = set_RecurseSubdirectories)) bool RecurseSubdirectories;

  __declspec(property(get = get_ReturnSpecialDirectories)) bool ReturnSpecialDirectories;

  /// @brief Field <AttributesToSkip>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__AttributesToSkip_k__BackingField,
                      put = __cordl_internal_set__AttributesToSkip_k__BackingField))::System::IO::FileAttributes _AttributesToSkip_k__BackingField;

  /// @brief Field <CompatibleRecursive>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__CompatibleRecursive_k__BackingField,
                             put = setStaticF__CompatibleRecursive_k__BackingField))::System::IO::EnumerationOptions* _CompatibleRecursive_k__BackingField;

  /// @brief Field <Compatible>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__Compatible_k__BackingField, put = setStaticF__Compatible_k__BackingField))::System::IO::EnumerationOptions* _Compatible_k__BackingField;

  /// @brief Field <Default>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__Default_k__BackingField, put = setStaticF__Default_k__BackingField))::System::IO::EnumerationOptions* _Default_k__BackingField;

  /// @brief Field <IgnoreInaccessible>k__BackingField, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get__IgnoreInaccessible_k__BackingField, put = __cordl_internal_set__IgnoreInaccessible_k__BackingField)) bool _IgnoreInaccessible_k__BackingField;

  /// @brief Field <MatchCasing>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__MatchCasing_k__BackingField, put = __cordl_internal_set__MatchCasing_k__BackingField))::System::IO::MatchCasing _MatchCasing_k__BackingField;

  /// @brief Field <MatchType>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__MatchType_k__BackingField, put = __cordl_internal_set__MatchType_k__BackingField))::System::IO::MatchType _MatchType_k__BackingField;

  /// @brief Field <RecurseSubdirectories>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__RecurseSubdirectories_k__BackingField,
                      put = __cordl_internal_set__RecurseSubdirectories_k__BackingField)) bool _RecurseSubdirectories_k__BackingField;

  /// @brief Field <ReturnSpecialDirectories>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__ReturnSpecialDirectories_k__BackingField,
                      put = __cordl_internal_set__ReturnSpecialDirectories_k__BackingField)) bool _ReturnSpecialDirectories_k__BackingField;

  /// @brief Method FromSearchOption, addr 0x28aacb8, size 0x13c, virtual false, abstract: false, final false
  static inline ::System::IO::EnumerationOptions* FromSearchOption(::System::IO::SearchOption searchOption);

  static inline ::System::IO::EnumerationOptions* New_ctor();

  constexpr ::System::IO::FileAttributes const& __cordl_internal_get__AttributesToSkip_k__BackingField() const;

  constexpr ::System::IO::FileAttributes& __cordl_internal_get__AttributesToSkip_k__BackingField();

  constexpr bool const& __cordl_internal_get__IgnoreInaccessible_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IgnoreInaccessible_k__BackingField();

  constexpr ::System::IO::MatchCasing const& __cordl_internal_get__MatchCasing_k__BackingField() const;

  constexpr ::System::IO::MatchCasing& __cordl_internal_get__MatchCasing_k__BackingField();

  constexpr ::System::IO::MatchType const& __cordl_internal_get__MatchType_k__BackingField() const;

  constexpr ::System::IO::MatchType& __cordl_internal_get__MatchType_k__BackingField();

  constexpr bool const& __cordl_internal_get__RecurseSubdirectories_k__BackingField() const;

  constexpr bool& __cordl_internal_get__RecurseSubdirectories_k__BackingField();

  constexpr bool const& __cordl_internal_get__ReturnSpecialDirectories_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ReturnSpecialDirectories_k__BackingField();

  constexpr void __cordl_internal_set__AttributesToSkip_k__BackingField(::System::IO::FileAttributes value);

  constexpr void __cordl_internal_set__IgnoreInaccessible_k__BackingField(bool value);

  constexpr void __cordl_internal_set__MatchCasing_k__BackingField(::System::IO::MatchCasing value);

  constexpr void __cordl_internal_set__MatchType_k__BackingField(::System::IO::MatchType value);

  constexpr void __cordl_internal_set__RecurseSubdirectories_k__BackingField(bool value);

  constexpr void __cordl_internal_set__ReturnSpecialDirectories_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x28abc1c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::IO::EnumerationOptions* getStaticF__CompatibleRecursive_k__BackingField();

  static inline ::System::IO::EnumerationOptions* getStaticF__Compatible_k__BackingField();

  static inline ::System::IO::EnumerationOptions* getStaticF__Default_k__BackingField();

  /// @brief Method get_AttributesToSkip, addr 0x28abc6c, size 0x8, virtual false, abstract: false, final false
  inline ::System::IO::FileAttributes get_AttributesToSkip();

  /// @brief Method get_Compatible, addr 0x28abb14, size 0x58, virtual false, abstract: false, final false
  static inline ::System::IO::EnumerationOptions* get_Compatible();

  /// @brief Method get_CompatibleRecursive, addr 0x28abb6c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::IO::EnumerationOptions* get_CompatibleRecursive();

  /// @brief Method get_Default, addr 0x28abbc4, size 0x58, virtual false, abstract: false, final false
  static inline ::System::IO::EnumerationOptions* get_Default();

  /// @brief Method get_IgnoreInaccessible, addr 0x28abc58, size 0x8, virtual false, abstract: false, final false
  inline bool get_IgnoreInaccessible();

  /// @brief Method get_MatchCasing, addr 0x28abc8c, size 0x8, virtual false, abstract: false, final false
  inline ::System::IO::MatchCasing get_MatchCasing();

  /// @brief Method get_MatchType, addr 0x28abc7c, size 0x8, virtual false, abstract: false, final false
  inline ::System::IO::MatchType get_MatchType();

  /// @brief Method get_RecurseSubdirectories, addr 0x28abc44, size 0x8, virtual false, abstract: false, final false
  inline bool get_RecurseSubdirectories();

  /// @brief Method get_ReturnSpecialDirectories, addr 0x28abc94, size 0x8, virtual false, abstract: false, final false
  inline bool get_ReturnSpecialDirectories();

  static inline void setStaticF__CompatibleRecursive_k__BackingField(::System::IO::EnumerationOptions* value);

  static inline void setStaticF__Compatible_k__BackingField(::System::IO::EnumerationOptions* value);

  static inline void setStaticF__Default_k__BackingField(::System::IO::EnumerationOptions* value);

  /// @brief Method set_AttributesToSkip, addr 0x28abc74, size 0x8, virtual false, abstract: false, final false
  inline void set_AttributesToSkip(::System::IO::FileAttributes value);

  /// @brief Method set_IgnoreInaccessible, addr 0x28abc60, size 0xc, virtual false, abstract: false, final false
  inline void set_IgnoreInaccessible(bool value);

  /// @brief Method set_MatchType, addr 0x28abc84, size 0x8, virtual false, abstract: false, final false
  inline void set_MatchType(::System::IO::MatchType value);

  /// @brief Method set_RecurseSubdirectories, addr 0x28abc4c, size 0xc, virtual false, abstract: false, final false
  inline void set_RecurseSubdirectories(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumerationOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnumerationOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumerationOptions(EnumerationOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumerationOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumerationOptions(EnumerationOptions const&) = delete;

  /// @brief Field <RecurseSubdirectories>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____RecurseSubdirectories_k__BackingField;

  /// @brief Field <IgnoreInaccessible>k__BackingField, offset: 0x11, size: 0x1, def value: None
  bool ____IgnoreInaccessible_k__BackingField;

  /// @brief Field <AttributesToSkip>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::System::IO::FileAttributes ____AttributesToSkip_k__BackingField;

  /// @brief Field <MatchType>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::System::IO::MatchType ____MatchType_k__BackingField;

  /// @brief Field <MatchCasing>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  ::System::IO::MatchCasing ____MatchCasing_k__BackingField;

  /// @brief Field <ReturnSpecialDirectories>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____ReturnSpecialDirectories_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::EnumerationOptions, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::IO::EnumerationOptions, ____RecurseSubdirectories_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::EnumerationOptions, ____IgnoreInaccessible_k__BackingField) == 0x11, "Offset mismatch!");

static_assert(offsetof(::System::IO::EnumerationOptions, ____AttributesToSkip_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::IO::EnumerationOptions, ____MatchType_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IO::EnumerationOptions, ____MatchCasing_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::IO::EnumerationOptions, ____ReturnSpecialDirectories_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::EnumerationOptions);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::EnumerationOptions*, "System.IO", "EnumerationOptions");
