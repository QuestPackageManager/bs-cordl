#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Polyglot/zzzz__GoogleDriveDownloadFormat_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GoogleDownload)
namespace Polyglot {
class __GoogleDownload___DownloadSheet_d__0;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace Polyglot {
struct GoogleDriveDownloadFormat;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Polyglot {
class GoogleDownload;
}
namespace Polyglot {
class __GoogleDownload___DownloadSheet_d__0;
}
// Write type traits
MARK_REF_PTR_T(::Polyglot::GoogleDownload);
MARK_REF_PTR_T(::Polyglot::__GoogleDownload___DownloadSheet_d__0);
// Type: ::<DownloadSheet>d__0
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Polyglot {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15552)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15550))
// CS Name: ::GoogleDownload::<DownloadSheet>d__0*
class CORDL_TYPE __GoogleDownload___DownloadSheet_d__0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field progressbar, offset 0x20, size 0x8
  __declspec(property(get = __get_progressbar, put = __set_progressbar))::System::Func_2<float_t, bool>* progressbar;

  /// @brief Field done, offset 0x28, size 0x8
  __declspec(property(get = __get_done, put = __set_done))::System::Action_1<::StringW>* done;

  /// @brief Field docsId, offset 0x30, size 0x8
  __declspec(property(get = __get_docsId, put = __set_docsId))::StringW docsId;

  /// @brief Field sheetId, offset 0x38, size 0x8
  __declspec(property(get = __get_sheetId, put = __set_sheetId))::StringW sheetId;

  /// @brief Field format, offset 0x40, size 0x4
  __declspec(property(get = __get_format, put = __set_format))::Polyglot::GoogleDriveDownloadFormat format;

  /// @brief Field <url>5__2, offset 0x48, size 0x8
  __declspec(property(get = __get__url_5__2, put = __set__url_5__2))::StringW _url_5__2;

  /// @brief Field <www>5__3, offset 0x50, size 0x8
  __declspec(property(get = __get__www_5__3, put = __set__www_5__3))::UnityEngine::Networking::UnityWebRequest* _www_5__3;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::System::Func_2<float_t, bool>*& __get_progressbar();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<float_t, bool>*> const& __get_progressbar() const;

  constexpr void __set_progressbar(::System::Func_2<float_t, bool>* value);

  constexpr ::System::Action_1<::StringW>*& __get_done();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __get_done() const;

  constexpr void __set_done(::System::Action_1<::StringW>* value);

  constexpr ::StringW& __get_docsId();

  constexpr ::StringW const& __get_docsId() const;

  constexpr void __set_docsId(::StringW value);

  constexpr ::StringW& __get_sheetId();

  constexpr ::StringW const& __get_sheetId() const;

  constexpr void __set_sheetId(::StringW value);

  constexpr ::Polyglot::GoogleDriveDownloadFormat& __get_format();

  constexpr ::Polyglot::GoogleDriveDownloadFormat const& __get_format() const;

  constexpr void __set_format(::Polyglot::GoogleDriveDownloadFormat value);

  constexpr ::StringW& __get__url_5__2();

  constexpr ::StringW const& __get__url_5__2() const;

  constexpr void __set__url_5__2(::StringW value);

  constexpr ::UnityEngine::Networking::UnityWebRequest*& __get__www_5__3();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::UnityWebRequest*> const& __get__www_5__3() const;

  constexpr void __set__www_5__3(::UnityEngine::Networking::UnityWebRequest* value);

  static inline ::Polyglot::__GoogleDownload___DownloadSheet_d__0* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x28019ac size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x28019d4 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x28019d8 size 0x300 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2801cd8 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2801ce0 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2801d20 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__GoogleDownload___DownloadSheet_d__0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GoogleDownload___DownloadSheet_d__0(__GoogleDownload___DownloadSheet_d__0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GoogleDownload___DownloadSheet_d__0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GoogleDownload___DownloadSheet_d__0(__GoogleDownload___DownloadSheet_d__0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GoogleDownload___DownloadSheet_d__0();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field progressbar, offset: 0x20, size: 0x8, def value: None
  ::System::Func_2<float_t, bool>* ___progressbar;

  /// @brief Field done, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___done;

  /// @brief Field docsId, offset: 0x30, size: 0x8, def value: None
  ::StringW ___docsId;

  /// @brief Field sheetId, offset: 0x38, size: 0x8, def value: None
  ::StringW ___sheetId;

  /// @brief Field format, offset: 0x40, size: 0x4, def value: None
  ::Polyglot::GoogleDriveDownloadFormat ___format;

  /// @brief Field <url>5__2, offset: 0x48, size: 0x8, def value: None
  ::StringW ____url_5__2;

  /// @brief Field <www>5__3, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Networking::UnityWebRequest* ____www_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Polyglot::__GoogleDownload___DownloadSheet_d__0, 0x58>, "Size mismatch!");

} // namespace Polyglot
// Type: Polyglot::GoogleDownload
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Polyglot {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15551))
// CS Name: ::Polyglot::GoogleDownload*
class CORDL_TYPE GoogleDownload : public ::System::Object {
public:
  // Declarations
  using _DownloadSheet_d__0 = ::Polyglot::__GoogleDownload___DownloadSheet_d__0;

  /// @brief Method DownloadSheet addr 0x280191c size 0x90 virtual false final false
  static inline ::System::Collections::IEnumerator* DownloadSheet(::StringW docsId, ::StringW sheetId, ::System::Action_1<::StringW>* done, ::Polyglot::GoogleDriveDownloadFormat format,
                                                                  ::System::Func_2<float_t, bool>* progressbar);

  // Ctor Parameters [CppParam { name: "", ty: "GoogleDownload", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GoogleDownload(GoogleDownload&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GoogleDownload", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GoogleDownload(GoogleDownload const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GoogleDownload();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Polyglot::GoogleDownload, 0x10>, "Size mismatch!");

} // namespace Polyglot
NEED_NO_BOX(::Polyglot::GoogleDownload);
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::GoogleDownload*, "Polyglot", "GoogleDownload");
NEED_NO_BOX(::Polyglot::__GoogleDownload___DownloadSheet_d__0);
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::__GoogleDownload___DownloadSheet_d__0*, "Polyglot", "GoogleDownload/<DownloadSheet>d__0");
