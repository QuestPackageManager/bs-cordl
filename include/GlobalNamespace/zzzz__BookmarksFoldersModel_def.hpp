#pragma once
// IWYU pragma private; include "GlobalNamespace/BookmarksFoldersModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FileBrowserItem_def.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BookmarksFoldersModel)
namespace GlobalNamespace {
class BookmarksFoldersModel___c;
}
namespace GlobalNamespace {
class FileBrowserItem;
}
namespace System {
struct Environment_SpecialFolder;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class BookmarksFoldersModel;
}
namespace GlobalNamespace {
class BookmarksFoldersModel___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BookmarksFoldersModel*);
MARK_REF_T(::GlobalNamespace::BookmarksFoldersModel___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BookmarksFoldersModel*, "", "BookmarksFoldersModel");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BookmarksFoldersModel___c*, "", "BookmarksFoldersModel/<>c");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BookmarksFoldersModel/<>c
class CORDL_TYPE BookmarksFoldersModel___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::BookmarksFoldersModel___c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::System::Func_2<::System::Environment_SpecialFolder, ::StringW>* __9__3_0;

  static inline ::GlobalNamespace::BookmarksFoldersModel___c* New_ctor();

  /// @brief Method .ctor, addr 0x3705044, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_bookmarksFolders>b__3_0, addr 0x3705048, size 0x8, virtual false, abstract: false, final false
  inline ::StringW _get_bookmarksFolders_b__3_0(::System::Environment_SpecialFolder specialFolder);

  static inline ::GlobalNamespace::BookmarksFoldersModel___c* getStaticF___9();

  static inline ::System::Func_2<::System::Environment_SpecialFolder, ::StringW>* getStaticF___9__3_0();

  static inline void setStaticF___9(::GlobalNamespace::BookmarksFoldersModel___c* value);

  static inline void setStaticF___9__3_0(::System::Func_2<::System::Environment_SpecialFolder, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BookmarksFoldersModel___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BookmarksFoldersModel___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BookmarksFoldersModel___c(BookmarksFoldersModel___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BookmarksFoldersModel___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BookmarksFoldersModel___c(BookmarksFoldersModel___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14785 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BookmarksFoldersModel___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies FileBrowserItem, PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: BookmarksFoldersModel
class CORDL_TYPE BookmarksFoldersModel : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using __c = ::GlobalNamespace::BookmarksFoldersModel___c;

  /// @brief Field _bookmarksFolders, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__bookmarksFolders, put = __cordl_internal_set__bookmarksFolders)) ::ArrayW<::GlobalNamespace::FileBrowserItem*> _bookmarksFolders;

  __declspec(property(get = get_bookmarksFolders)) ::ArrayW<::GlobalNamespace::FileBrowserItem*> bookmarksFolders;

  /// @brief Field myFolders, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_myFolders, put = __cordl_internal_set_myFolders)) ::ArrayW<::StringW> myFolders;

  static inline ::GlobalNamespace::BookmarksFoldersModel* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::FileBrowserItem*> const& __cordl_internal_get__bookmarksFolders() const;

  constexpr ::ArrayW<::GlobalNamespace::FileBrowserItem*>& __cordl_internal_get__bookmarksFolders();

  constexpr ::ArrayW<::StringW> const& __cordl_internal_get_myFolders() const;

  constexpr ::ArrayW<::StringW>& __cordl_internal_get_myFolders();

  constexpr void __cordl_internal_set__bookmarksFolders(::ArrayW<::GlobalNamespace::FileBrowserItem*> value);

  constexpr void __cordl_internal_set_myFolders(::ArrayW<::StringW> value);

  /// @brief Method .ctor, addr 0x3704fe8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bookmarksFolders, addr 0x3704a50, size 0x58c, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::FileBrowserItem*> get_bookmarksFolders();

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14786 };

  /// @brief Field myFolders, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW> ___myFolders;

  /// @brief Field _bookmarksFolders, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::FileBrowserItem*> ____bookmarksFolders;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BookmarksFoldersModel, ___myFolders) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BookmarksFoldersModel, ____bookmarksFolders) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BookmarksFoldersModel) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
