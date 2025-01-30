#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Asn1EncodableVector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Asn1EncodableVector)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Asn1EncodableVector);
// Dependencies System.Collections.IEnumerable, System.Object
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Asn1EncodableVector
class CORDL_TYPE Asn1EncodableVector : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Field EmptyElements, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EmptyElements, put = setStaticF_EmptyElements)) ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*>
      EmptyElements;

  __declspec(property(get = get_Item)) ::Org::BouncyCastle::Asn1::Asn1Encodable* Item[];

  /// @brief Field copyOnWrite, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_copyOnWrite, put = __cordl_internal_set_copyOnWrite)) bool copyOnWrite;

  /// @brief Field elementCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_elementCount, put = __cordl_internal_set_elementCount)) int32_t elementCount;

  /// @brief Field elements, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_elements,
                      put = __cordl_internal_set_elements)) ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*>
      elements;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x2621250, size 0xf0, virtual false, abstract: false, final false
  inline void Add(::Org::BouncyCastle::Asn1::Asn1Encodable* element);

  /// @brief Method Add, addr 0x26284f0, size 0x6c, virtual false, abstract: false, final false
  inline void Add(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> objs);

  /// @brief Method AddAll, addr 0x262997c, size 0x16c, virtual false, abstract: false, final false
  inline void AddAll(::Org::BouncyCastle::Asn1::Asn1EncodableVector* other);

  /// @brief Method AddOptional, addr 0x2629908, size 0x6c, virtual false, abstract: false, final false
  inline void AddOptional(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> objs);

  /// @brief Method AddOptionalTagged, addr 0x2621180, size 0x8c, virtual false, abstract: false, final false
  inline void AddOptionalTagged(bool isExplicit, int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  /// @brief Method CloneElements, addr 0x2629d70, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*>
  CloneElements(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> elements);

  /// @brief Method CopyElements, addr 0x2629bf4, size 0xac, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> CopyElements();

  /// @brief Method FromEnumerable, addr 0x26293d0, size 0x364, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1EncodableVector* FromEnumerable(::System::Collections::IEnumerable* e);

  /// @brief Method GetEnumerator, addr 0x2629bd8, size 0x1c, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  static inline ::Org::BouncyCastle::Asn1::Asn1EncodableVector* New_ctor();

  static inline ::Org::BouncyCastle::Asn1::Asn1EncodableVector* New_ctor(int32_t initialCapacity);

  static inline ::Org::BouncyCastle::Asn1::Asn1EncodableVector* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> v);

  /// @brief Method Reallocate, addr 0x262983c, size 0xcc, virtual false, abstract: false, final false
  inline void Reallocate(int32_t minCapacity);

  /// @brief Method TakeElements, addr 0x2629ca0, size 0xd0, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> TakeElements();

  constexpr bool const& __cordl_internal_get_copyOnWrite() const;

  constexpr bool& __cordl_internal_get_copyOnWrite();

  constexpr int32_t const& __cordl_internal_get_elementCount() const;

  constexpr int32_t& __cordl_internal_get_elementCount();

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> const& __cordl_internal_get_elements() const;

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*>& __cordl_internal_get_elements();

  constexpr void __cordl_internal_set_copyOnWrite(bool value);

  constexpr void __cordl_internal_set_elementCount(int32_t value);

  constexpr void __cordl_internal_set_elements(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> value);

  /// @brief Method .ctor, addr 0x2626e58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2629734, size 0x108, virtual false, abstract: false, final false
  inline void _ctor(int32_t initialCapacity);

  /// @brief Method .ctor, addr 0x2621154, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> v);

  static inline ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> getStaticF_EmptyElements();

  /// @brief Method get_Count, addr 0x2629bd0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x2629ae8, size 0xe8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Item(int32_t index);

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  static inline void setStaticF_EmptyElements(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1EncodableVector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Asn1EncodableVector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1EncodableVector(Asn1EncodableVector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1EncodableVector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1EncodableVector(Asn1EncodableVector const&) = delete;

  /// @brief Field DefaultCapacity offset 0xffffffff size 0x4
  static constexpr int32_t DefaultCapacity{ static_cast<int32_t>(0xa) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 449 };

  /// @brief Field elements, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::Org::BouncyCastle::Asn1::Asn1Encodable*>*> ___elements;

  /// @brief Field elementCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___elementCount;

  /// @brief Field copyOnWrite, offset: 0x1c, size: 0x1, def value: None
  bool ___copyOnWrite;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Asn1EncodableVector, ___elements) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Asn1EncodableVector, ___elementCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Asn1EncodableVector, ___copyOnWrite) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Asn1EncodableVector, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1EncodableVector);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1EncodableVector*, "Org.BouncyCastle.Asn1", "Asn1EncodableVector");
