#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KeySizes)
// Forward declare root types
namespace System::Security::Cryptography {
class KeySizes;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::KeySizes);
// Type: System.Security.Cryptography::KeySizes
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2923))
// CS Name: ::System.Security.Cryptography::KeySizes*
class CORDL_TYPE KeySizes : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_minSize, offset 0x10, size 0x4
  __declspec(property(get = __get_m_minSize, put = __set_m_minSize)) int32_t m_minSize;

  /// @brief Field m_maxSize, offset 0x14, size 0x4
  __declspec(property(get = __get_m_maxSize, put = __set_m_maxSize)) int32_t m_maxSize;

  /// @brief Field m_skipSize, offset 0x18, size 0x4
  __declspec(property(get = __get_m_skipSize, put = __set_m_skipSize)) int32_t m_skipSize;

  __declspec(property(get = get_MinSize)) int32_t MinSize;

  __declspec(property(get = get_MaxSize)) int32_t MaxSize;

  __declspec(property(get = get_SkipSize)) int32_t SkipSize;

  constexpr int32_t& __get_m_minSize();

  constexpr int32_t const& __get_m_minSize() const;

  constexpr void __set_m_minSize(int32_t value);

  constexpr int32_t& __get_m_maxSize();

  constexpr int32_t const& __get_m_maxSize() const;

  constexpr void __set_m_maxSize(int32_t value);

  constexpr int32_t& __get_m_skipSize();

  constexpr int32_t const& __get_m_skipSize() const;

  constexpr void __set_m_skipSize(int32_t value);

  /// @brief Method get_MinSize, addr 0x245c000, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MinSize();

  /// @brief Method get_MaxSize, addr 0x245c008, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MaxSize();

  /// @brief Method get_SkipSize, addr 0x245c010, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_SkipSize();

  static inline ::System::Security::Cryptography::KeySizes* New_ctor(int32_t minSize, int32_t maxSize, int32_t skipSize);

  /// @brief Method .ctor, addr 0x245bdac, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(int32_t minSize, int32_t maxSize, int32_t skipSize);

  /// @brief Method IsLegal, addr 0x245c018, size 0x4c, virtual false, abstract: false, final false
  inline bool IsLegal(int32_t keySize);

  /// @brief Method IsLegalKeySize, addr 0x245c064, size 0x80, virtual false, abstract: false, final false
  static inline bool IsLegalKeySize(::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> legalKeys, int32_t size);

  // Ctor Parameters [CppParam { name: "", ty: "KeySizes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeySizes(KeySizes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeySizes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeySizes(KeySizes const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeySizes();

public:
  /// @brief Field m_minSize, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_minSize;

  /// @brief Field m_maxSize, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_maxSize;

  /// @brief Field m_skipSize, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_skipSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::KeySizes, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::KeySizes, ___m_minSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::KeySizes, ___m_maxSize) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::KeySizes, ___m_skipSize) == 0x18, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::KeySizes);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::KeySizes*, "System.Security.Cryptography", "KeySizes");
