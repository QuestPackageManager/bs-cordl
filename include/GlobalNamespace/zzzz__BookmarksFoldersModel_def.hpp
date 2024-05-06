#pragma once
// IWYU pragma private; include "GlobalNamespace/BookmarksFoldersModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BookmarksFoldersModel)
namespace GlobalNamespace {
class FileBrowserItem;
}
namespace GlobalNamespace {
class __BookmarksFoldersModel____c;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
struct __Environment__SpecialFolder;
}
// Forward declare root types
namespace GlobalNamespace {
class BookmarksFoldersModel;
}
namespace GlobalNamespace {
class __BookmarksFoldersModel____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BookmarksFoldersModel);
MARK_REF_PTR_T(::GlobalNamespace::__BookmarksFoldersModel____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BookmarksFoldersModel::<>c*
class CORDL_TYPE __BookmarksFoldersModel____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__BookmarksFoldersModel____c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0))::System::Func_2<::System::__Environment__SpecialFolder, ::StringW>* __9__3_0;

  static inline ::GlobalNamespace::__BookmarksFoldersModel____c* New_ctor();

  /// @brief Method .ctor, addr 0x149cd84, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_bookmarksFolders>b__3_0, addr 0x149cd8c, size 0xc, virtual false, abstract: false, final false
  inline ::StringW _get_bookmarksFolders_b__3_0(::System::__Environment__SpecialFolder specialFolder);

  static inline ::GlobalNamespace::__BookmarksFoldersModel____c* getStaticF___9();

  static inline ::System::Func_2<::System::__Environment__SpecialFolder, ::StringW>* getStaticF___9__3_0();

  static inline void setStaticF___9(::GlobalNamespace::__BookmarksFoldersModel____c* value);

  static inline void setStaticF___9__3_0(::System::Func_2<::System::__Environment__SpecialFolder, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BookmarksFoldersModel____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BookmarksFoldersModel____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BookmarksFoldersModel____c(__BookmarksFoldersModel____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BookmarksFoldersModel____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BookmarksFoldersModel____c(__BookmarksFoldersModel____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BookmarksFoldersModel____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BookmarksFoldersModel
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BookmarksFoldersModel*
class CORDL_TYPE BookmarksFoldersModel : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using __c = ::GlobalNamespace::__BookmarksFoldersModel____c;

  /// @brief Field _bookmarksFolders, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__bookmarksFolders,
                      put = __cordl_internal_set__bookmarksFolders))::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*> _bookmarksFolders;

  __declspec(property(get = get_bookmarksFolders))::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*> bookmarksFolders;

  /// @brief Field myFolders, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_myFolders, put = __cordl_internal_set_myFolders))::ArrayW<::StringW, ::Array<::StringW>*> myFolders;

  static inline ::GlobalNamespace::BookmarksFoldersModel* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*> const& __cordl_internal_get__bookmarksFolders() const;

  constexpr ::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*>& __cordl_internal_get__bookmarksFolders();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_myFolders() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_myFolders();

  constexpr void __cordl_internal_set__bookmarksFolders(::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*> value);

  constexpr void __cordl_internal_set_myFolders(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method .ctor, addr 0x149cd18, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bookmarksFolders, addr 0x149c744, size 0x594, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*> get_bookmarksFolders();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BookmarksFoldersModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BookmarksFoldersModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BookmarksFoldersModel(BookmarksFoldersModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BookmarksFoldersModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BookmarksFoldersModel(BookmarksFoldersModel const&) = delete;

  /// @brief Field myFolders, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___myFolders;

  /// @brief Field _bookmarksFolders, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*> ____bookmarksFolders;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BookmarksFoldersModel, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BookmarksFoldersModel, ___myFolders) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BookmarksFoldersModel, ____bookmarksFolders) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BookmarksFoldersModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BookmarksFoldersModel*, "", "BookmarksFoldersModel");
NEED_NO_BOX(::GlobalNamespace::__BookmarksFoldersModel____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BookmarksFoldersModel____c*, "", "BookmarksFoldersModel/<>c");
