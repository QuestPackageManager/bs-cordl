#pragma once
// IWYU pragma private; include "System/Text/Normalization.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Normalization)
namespace System::Text {
struct NormalizationCheck;
}
namespace System::Text {
struct NormalizationForm;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Text {
class Normalization;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::Normalization);
// Type: System.Text::Normalization
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// CS Name: ::System.Text::Normalization*
class CORDL_TYPE Normalization : public ::System::Object {
public:
  // Declarations
  /// @brief Field charMapIndex, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_charMapIndex, put = setStaticF_charMapIndex))::cordl_internals::Ptr<int16_t> charMapIndex;

  /// @brief Field combiningClass, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_combiningClass, put = setStaticF_combiningClass))::cordl_internals::Ptr<uint8_t> combiningClass;

  /// @brief Field forLock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_forLock, put = setStaticF_forLock))::System::Object* forLock;

  /// @brief Field helperIndex, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_helperIndex, put = setStaticF_helperIndex))::cordl_internals::Ptr<int16_t> helperIndex;

  /// @brief Field isReady, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_isReady, put = setStaticF_isReady)) bool isReady;

  /// @brief Field mapIdxToComposite, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_mapIdxToComposite, put = setStaticF_mapIdxToComposite))::cordl_internals::Ptr<uint16_t> mapIdxToComposite;

  /// @brief Field mappedChars, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_mappedChars, put = setStaticF_mappedChars))::cordl_internals::Ptr<int32_t> mappedChars;

  /// @brief Field props, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_props, put = setStaticF_props))::cordl_internals::Ptr<uint8_t> props;

  /// @brief Method CharMapIdx, addr 0x27e9428, size 0x94, virtual false, abstract: false, final false
  static inline int32_t CharMapIdx(int32_t cp);

  /// @brief Method Combine, addr 0x27e98c4, size 0x13c, virtual false, abstract: false, final false
  static inline ::System::Text::StringBuilder* Combine(::StringW source, int32_t start, int32_t checkType);

  /// @brief Method Combine, addr 0x27e9a00, size 0x110, virtual false, abstract: false, final false
  static inline void Combine(::System::Text::StringBuilder* sb, int32_t i, int32_t checkType);

  /// @brief Method CombineHangul, addr 0x27e9c2c, size 0x1c4, virtual false, abstract: false, final false
  static inline int32_t CombineHangul(::System::Text::StringBuilder* sb, ::StringW s, int32_t current);

  /// @brief Method Compose, addr 0x27e96b4, size 0xe0, virtual false, abstract: false, final false
  static inline ::StringW Compose(::StringW source, int32_t checkType);

  /// @brief Method Decompose, addr 0x27ea178, size 0x8c, virtual false, abstract: false, final false
  static inline ::StringW Decompose(::StringW source, int32_t checkType);

  /// @brief Method Decompose, addr 0x27e9794, size 0x130, virtual false, abstract: false, final false
  static inline void Decompose(::StringW source, ByRef<::System::Text::StringBuilder*> sb, int32_t checkType);

  /// @brief Method DecomposeChar, addr 0x27ea204, size 0x1d8, virtual false, abstract: false, final false
  static inline void DecomposeChar(ByRef<::System::Text::StringBuilder*> sb, ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> buf, ::StringW s, int32_t i, int32_t checkType, ByRef<int32_t> start);

  /// @brief Method Fetch, addr 0x27ea024, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t Fetch(::System::Text::StringBuilder* sb, ::StringW s, int32_t i);

  /// @brief Method GetCanonical, addr 0x27ea64c, size 0x1b8, virtual false, abstract: false, final false
  static inline int32_t GetCanonical(int32_t c, ::ArrayW<int32_t, ::Array<int32_t>*> buf, int32_t bufIdx, int32_t checkType);

  /// @brief Method GetCanonicalHangul, addr 0x27ea804, size 0xec, virtual false, abstract: false, final false
  static inline int32_t GetCanonicalHangul(int32_t s, ::ArrayW<int32_t, ::Array<int32_t>*> buf, int32_t bufIdx);

  /// @brief Method GetCombiningClass, addr 0x27e94bc, size 0xa8, virtual false, abstract: false, final false
  static inline uint8_t GetCombiningClass(int32_t c);

  /// @brief Method GetPrimaryCompositeFromMapIndex, addr 0x27e9564, size 0xa8, virtual false, abstract: false, final false
  static inline int32_t GetPrimaryCompositeFromMapIndex(int32_t src);

  /// @brief Method GetPrimaryCompositeHelperIndex, addr 0x27e960c, size 0xa8, virtual false, abstract: false, final false
  static inline int32_t GetPrimaryCompositeHelperIndex(int32_t cp);

  /// @brief Method Normalize, addr 0x27ea8f0, size 0xbc, virtual false, abstract: false, final false
  static inline ::StringW Normalize(::StringW source, ::System::Text::NormalizationForm normalizationForm);

  /// @brief Method Normalize, addr 0x27ea9ac, size 0x98, virtual false, abstract: false, final false
  static inline ::StringW Normalize(::StringW source, int32_t type);

  /// @brief Method PropValue, addr 0x27e9394, size 0x94, virtual false, abstract: false, final false
  static inline uint32_t PropValue(int32_t cp);

  /// @brief Method QuickCheck, addr 0x27e9b10, size 0x11c, virtual false, abstract: false, final false
  static inline ::System::Text::NormalizationCheck QuickCheck(char16_t c, int32_t type);

  /// @brief Method ReorderCanonical, addr 0x27ea3dc, size 0x270, virtual false, abstract: false, final false
  static inline void ReorderCanonical(::StringW src, ByRef<::System::Text::StringBuilder*> sb, int32_t start);

  /// @brief Method TryCompose, addr 0x27ea060, size 0x118, virtual false, abstract: false, final false
  static inline int32_t TryCompose(int32_t i, int32_t starter, int32_t candidate);

  /// @brief Method TryComposeWithPreviousStarter, addr 0x27e9df0, size 0x234, virtual false, abstract: false, final false
  static inline int32_t TryComposeWithPreviousStarter(::System::Text::StringBuilder* sb, ::StringW s, int32_t current);

  static inline ::cordl_internals::Ptr<int16_t> getStaticF_charMapIndex();

  static inline ::cordl_internals::Ptr<uint8_t> getStaticF_combiningClass();

  static inline ::System::Object* getStaticF_forLock();

  static inline ::cordl_internals::Ptr<int16_t> getStaticF_helperIndex();

  static inline bool getStaticF_isReady();

  static inline ::cordl_internals::Ptr<uint16_t> getStaticF_mapIdxToComposite();

  static inline ::cordl_internals::Ptr<int32_t> getStaticF_mappedChars();

  static inline ::cordl_internals::Ptr<uint8_t> getStaticF_props();

  /// @brief Method load_normalization_resource, addr 0x27eaa44, size 0x4, virtual false, abstract: false, final false
  static inline void load_normalization_resource(ByRef<::System::IntPtr> props, ByRef<::System::IntPtr> mappedChars, ByRef<::System::IntPtr> charMapIndex, ByRef<::System::IntPtr> helperIndex,
                                                 ByRef<::System::IntPtr> mapIdxToComposite, ByRef<::System::IntPtr> combiningClass);

  static inline void setStaticF_charMapIndex(::cordl_internals::Ptr<int16_t> value);

  static inline void setStaticF_combiningClass(::cordl_internals::Ptr<uint8_t> value);

  static inline void setStaticF_forLock(::System::Object* value);

  static inline void setStaticF_helperIndex(::cordl_internals::Ptr<int16_t> value);

  static inline void setStaticF_isReady(bool value);

  static inline void setStaticF_mapIdxToComposite(::cordl_internals::Ptr<uint16_t> value);

  static inline void setStaticF_mappedChars(::cordl_internals::Ptr<int32_t> value);

  static inline void setStaticF_props(::cordl_internals::Ptr<uint8_t> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Normalization();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Normalization", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Normalization(Normalization&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Normalization", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Normalization(Normalization const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::Normalization, 0x10>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::Normalization);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::Normalization*, "System.Text", "Normalization");
