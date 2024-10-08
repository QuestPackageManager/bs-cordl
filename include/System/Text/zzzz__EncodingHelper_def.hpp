#pragma once
// IWYU pragma private; include "System/Text/EncodingHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EncodingHelper)
namespace System::Reflection {
class Assembly;
}
namespace System::Text {
class Encoding;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Text {
class EncodingHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::EncodingHelper);
// Type: System.Text::EncodingHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// CS Name: ::System.Text::EncodingHelper*
class CORDL_TYPE EncodingHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Field i18nAssembly, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_i18nAssembly, put = setStaticF_i18nAssembly)) ::System::Reflection::Assembly* i18nAssembly;

  /// @brief Field i18nDisabled, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_i18nDisabled, put = setStaticF_i18nDisabled)) bool i18nDisabled;

  /// @brief Field lockobj, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_lockobj, put = setStaticF_lockobj)) ::System::Object* lockobj;

  /// @brief Field utf8EncodingWithoutMarkers, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_utf8EncodingWithoutMarkers, put = setStaticF_utf8EncodingWithoutMarkers)) ::System::Text::Encoding* utf8EncodingWithoutMarkers;

  /// @brief Method GetDefaultEncoding, addr 0x3c1a35c, size 0x17c, virtual false, abstract: false, final false
  static inline ::System::Text::Encoding* GetDefaultEncoding();

  /// @brief Method InternalCodePage, addr 0x3c1d5bc, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW InternalCodePage(ByRef<int32_t> code_page);

  /// @brief Method InvokeI18N, addr 0x3c187cc, size 0x714, virtual false, abstract: false, final false
  static inline ::System::Object* InvokeI18N(::StringW name, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  static inline ::System::Reflection::Assembly* getStaticF_i18nAssembly();

  static inline bool getStaticF_i18nDisabled();

  static inline ::System::Object* getStaticF_lockobj();

  static inline ::System::Text::Encoding* getStaticF_utf8EncodingWithoutMarkers();

  /// @brief Method get_UTF8Unmarked, addr 0x3c1d3d8, size 0x1e4, virtual false, abstract: false, final false
  static inline ::System::Text::Encoding* get_UTF8Unmarked();

  static inline void setStaticF_i18nAssembly(::System::Reflection::Assembly* value);

  static inline void setStaticF_i18nDisabled(bool value);

  static inline void setStaticF_lockobj(::System::Object* value);

  static inline void setStaticF_utf8EncodingWithoutMarkers(::System::Text::Encoding* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncodingHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EncodingHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncodingHelper(EncodingHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncodingHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncodingHelper(EncodingHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2880 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::EncodingHelper, 0x10>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::EncodingHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::EncodingHelper*, "System.Text", "EncodingHelper");
