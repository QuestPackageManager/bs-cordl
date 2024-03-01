#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MSCompatUnicodeTableUtil)
namespace Mono::Globalization::Unicode {
class CodePointIndexer;
}
// Forward declare root types
namespace Mono::Globalization::Unicode {
class MSCompatUnicodeTableUtil;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Globalization::Unicode::MSCompatUnicodeTableUtil);
// Type: Mono.Globalization.Unicode::MSCompatUnicodeTableUtil
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Globalization::Unicode {
// Is value type: false
// CS Name: ::Mono.Globalization.Unicode::MSCompatUnicodeTableUtil*
class CORDL_TYPE MSCompatUnicodeTableUtil : public ::System::Object {
public:
  // Declarations
  /// @brief Field Category, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Category, put = setStaticF_Category))::Mono::Globalization::Unicode::CodePointIndexer* Category;

  /// @brief Field Cjk, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Cjk, put = setStaticF_Cjk))::Mono::Globalization::Unicode::CodePointIndexer* Cjk;

  /// @brief Field CjkCHS, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CjkCHS, put = setStaticF_CjkCHS))::Mono::Globalization::Unicode::CodePointIndexer* CjkCHS;

  /// @brief Field Ignorable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Ignorable, put = setStaticF_Ignorable))::Mono::Globalization::Unicode::CodePointIndexer* Ignorable;

  /// @brief Field Level1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Level1, put = setStaticF_Level1))::Mono::Globalization::Unicode::CodePointIndexer* Level1;

  /// @brief Field Level2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Level2, put = setStaticF_Level2))::Mono::Globalization::Unicode::CodePointIndexer* Level2;

  /// @brief Field Level3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Level3, put = setStaticF_Level3))::Mono::Globalization::Unicode::CodePointIndexer* Level3;

  static inline ::Mono::Globalization::Unicode::CodePointIndexer* getStaticF_Category();

  static inline ::Mono::Globalization::Unicode::CodePointIndexer* getStaticF_Cjk();

  static inline ::Mono::Globalization::Unicode::CodePointIndexer* getStaticF_CjkCHS();

  static inline ::Mono::Globalization::Unicode::CodePointIndexer* getStaticF_Ignorable();

  static inline ::Mono::Globalization::Unicode::CodePointIndexer* getStaticF_Level1();

  static inline ::Mono::Globalization::Unicode::CodePointIndexer* getStaticF_Level2();

  static inline ::Mono::Globalization::Unicode::CodePointIndexer* getStaticF_Level3();

  static inline void setStaticF_Category(::Mono::Globalization::Unicode::CodePointIndexer* value);

  static inline void setStaticF_Cjk(::Mono::Globalization::Unicode::CodePointIndexer* value);

  static inline void setStaticF_CjkCHS(::Mono::Globalization::Unicode::CodePointIndexer* value);

  static inline void setStaticF_Ignorable(::Mono::Globalization::Unicode::CodePointIndexer* value);

  static inline void setStaticF_Level1(::Mono::Globalization::Unicode::CodePointIndexer* value);

  static inline void setStaticF_Level2(::Mono::Globalization::Unicode::CodePointIndexer* value);

  static inline void setStaticF_Level3(::Mono::Globalization::Unicode::CodePointIndexer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MSCompatUnicodeTableUtil();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MSCompatUnicodeTableUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MSCompatUnicodeTableUtil(MSCompatUnicodeTableUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MSCompatUnicodeTableUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MSCompatUnicodeTableUtil(MSCompatUnicodeTableUtil const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Globalization::Unicode::MSCompatUnicodeTableUtil, 0x10>, "Size mismatch!");

} // namespace Mono::Globalization::Unicode
NEED_NO_BOX(::Mono::Globalization::Unicode::MSCompatUnicodeTableUtil);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Globalization::Unicode::MSCompatUnicodeTableUtil*, "Mono.Globalization.Unicode", "MSCompatUnicodeTableUtil");
