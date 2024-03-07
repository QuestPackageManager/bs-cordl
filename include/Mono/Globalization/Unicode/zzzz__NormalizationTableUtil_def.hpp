#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NormalizationTableUtil)
namespace Mono::Globalization::Unicode {
class CodePointIndexer;
}
// Forward declare root types
namespace Mono::Globalization::Unicode {
class NormalizationTableUtil;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Globalization::Unicode::NormalizationTableUtil);
// Type: Mono.Globalization.Unicode::NormalizationTableUtil
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Globalization::Unicode {
// Is value type: false
// CS Name: ::Mono.Globalization.Unicode::NormalizationTableUtil*
class CORDL_TYPE NormalizationTableUtil : public ::System::Object {
public:
  // Declarations
  /// @brief Field Combining, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Combining, put = setStaticF_Combining))::Mono::Globalization::Unicode::CodePointIndexer* Combining;

  /// @brief Field Composite, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Composite, put = setStaticF_Composite))::Mono::Globalization::Unicode::CodePointIndexer* Composite;

  /// @brief Field Helper, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Helper, put = setStaticF_Helper))::Mono::Globalization::Unicode::CodePointIndexer* Helper;

  /// @brief Field Map, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Map, put = setStaticF_Map))::Mono::Globalization::Unicode::CodePointIndexer* Map;

  /// @brief Field Prop, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Prop, put = setStaticF_Prop))::Mono::Globalization::Unicode::CodePointIndexer* Prop;

  /// @brief Method MapIdx, addr 0x256d0d8, size 0x68, virtual false, abstract: false, final false
  static inline int32_t MapIdx(int32_t cp);

  /// @brief Method PropIdx, addr 0x256d070, size 0x68, virtual false, abstract: false, final false
  static inline int32_t PropIdx(int32_t cp);

  static inline ::Mono::Globalization::Unicode::CodePointIndexer* getStaticF_Combining();

  static inline ::Mono::Globalization::Unicode::CodePointIndexer* getStaticF_Composite();

  static inline ::Mono::Globalization::Unicode::CodePointIndexer* getStaticF_Helper();

  static inline ::Mono::Globalization::Unicode::CodePointIndexer* getStaticF_Map();

  static inline ::Mono::Globalization::Unicode::CodePointIndexer* getStaticF_Prop();

  static inline void setStaticF_Combining(::Mono::Globalization::Unicode::CodePointIndexer* value);

  static inline void setStaticF_Composite(::Mono::Globalization::Unicode::CodePointIndexer* value);

  static inline void setStaticF_Helper(::Mono::Globalization::Unicode::CodePointIndexer* value);

  static inline void setStaticF_Map(::Mono::Globalization::Unicode::CodePointIndexer* value);

  static inline void setStaticF_Prop(::Mono::Globalization::Unicode::CodePointIndexer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NormalizationTableUtil();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NormalizationTableUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NormalizationTableUtil(NormalizationTableUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NormalizationTableUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NormalizationTableUtil(NormalizationTableUtil const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Globalization::Unicode::NormalizationTableUtil, 0x10>, "Size mismatch!");

} // namespace Mono::Globalization::Unicode
NEED_NO_BOX(::Mono::Globalization::Unicode::NormalizationTableUtil);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::NormalizationTableUtil*, "Mono.Globalization.Unicode", "NormalizationTableUtil");
