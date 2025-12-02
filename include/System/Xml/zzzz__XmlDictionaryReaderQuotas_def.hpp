#pragma once
// IWYU pragma private; include "System/Xml/XmlDictionaryReaderQuotas.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlDictionaryReaderQuotaTypes_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlDictionaryReaderQuotas)
namespace System::Xml {
struct XmlDictionaryReaderQuotaTypes;
}
// Forward declare root types
namespace System::Xml {
class XmlDictionaryReaderQuotas;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlDictionaryReaderQuotas);
// Dependencies System.Object, System.Xml.XmlDictionaryReaderQuotaTypes
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlDictionaryReaderQuotas
class CORDL_TYPE XmlDictionaryReaderQuotas : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_MaxArrayLength)) int32_t MaxArrayLength;

  __declspec(property(get = get_MaxBytesPerRead)) int32_t MaxBytesPerRead;

  __declspec(property(get = get_MaxDepth)) int32_t MaxDepth;

  __declspec(property(get = get_MaxNameTableCharCount)) int32_t MaxNameTableCharCount;

  __declspec(property(get = get_MaxStringContentLength)) int32_t MaxStringContentLength;

  /// @brief Field defaultQuota, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_defaultQuota, put = setStaticF_defaultQuota)) ::System::Xml::XmlDictionaryReaderQuotas* defaultQuota;

  /// @brief Field maxArrayLength, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_maxArrayLength, put = __cordl_internal_set_maxArrayLength)) int32_t maxArrayLength;

  /// @brief Field maxBytesPerRead, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_maxBytesPerRead, put = __cordl_internal_set_maxBytesPerRead)) int32_t maxBytesPerRead;

  /// @brief Field maxDepth, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_maxDepth, put = __cordl_internal_set_maxDepth)) int32_t maxDepth;

  /// @brief Field maxNameTableCharCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_maxNameTableCharCount, put = __cordl_internal_set_maxNameTableCharCount)) int32_t maxNameTableCharCount;

  /// @brief Field maxQuota, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_maxQuota, put = setStaticF_maxQuota)) ::System::Xml::XmlDictionaryReaderQuotas* maxQuota;

  /// @brief Field maxStringContentLength, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_maxStringContentLength, put = __cordl_internal_set_maxStringContentLength)) int32_t maxStringContentLength;

  /// @brief Field modifiedQuotas, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_modifiedQuotas, put = __cordl_internal_set_modifiedQuotas)) ::System::Xml::XmlDictionaryReaderQuotaTypes modifiedQuotas;

  /// @brief Field readOnly, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_readOnly, put = __cordl_internal_set_readOnly)) bool readOnly;

  /// @brief Method CopyTo, addr 0x5f07b20, size 0xc0, virtual false, abstract: false, final false
  inline void CopyTo(::System::Xml::XmlDictionaryReaderQuotas* quotas);

  /// @brief Method InternalCopyTo, addr 0x5f07c60, size 0x20, virtual false, abstract: false, final false
  inline void InternalCopyTo(::System::Xml::XmlDictionaryReaderQuotas* quotas);

  /// @brief Method MakeReadOnly, addr 0x5f07bf8, size 0xc, virtual false, abstract: false, final false
  inline void MakeReadOnly();

  static inline ::System::Xml::XmlDictionaryReaderQuotas* New_ctor();

  static inline ::System::Xml::XmlDictionaryReaderQuotas* New_ctor(int32_t maxDepth, int32_t maxStringContentLength, int32_t maxArrayLength, int32_t maxBytesPerRead, int32_t maxNameTableCharCount,
                                                                   ::System::Xml::XmlDictionaryReaderQuotaTypes modifiedQuotas);

  constexpr int32_t const& __cordl_internal_get_maxArrayLength() const;

  constexpr int32_t& __cordl_internal_get_maxArrayLength();

  constexpr int32_t const& __cordl_internal_get_maxBytesPerRead() const;

  constexpr int32_t& __cordl_internal_get_maxBytesPerRead();

  constexpr int32_t const& __cordl_internal_get_maxDepth() const;

  constexpr int32_t& __cordl_internal_get_maxDepth();

  constexpr int32_t const& __cordl_internal_get_maxNameTableCharCount() const;

  constexpr int32_t& __cordl_internal_get_maxNameTableCharCount();

  constexpr int32_t const& __cordl_internal_get_maxStringContentLength() const;

  constexpr int32_t& __cordl_internal_get_maxStringContentLength();

  constexpr ::System::Xml::XmlDictionaryReaderQuotaTypes const& __cordl_internal_get_modifiedQuotas() const;

  constexpr ::System::Xml::XmlDictionaryReaderQuotaTypes& __cordl_internal_get_modifiedQuotas();

  constexpr bool const& __cordl_internal_get_readOnly() const;

  constexpr bool& __cordl_internal_get_readOnly();

  constexpr void __cordl_internal_set_maxArrayLength(int32_t value);

  constexpr void __cordl_internal_set_maxBytesPerRead(int32_t value);

  constexpr void __cordl_internal_set_maxDepth(int32_t value);

  constexpr void __cordl_internal_set_maxNameTableCharCount(int32_t value);

  constexpr void __cordl_internal_set_maxStringContentLength(int32_t value);

  constexpr void __cordl_internal_set_modifiedQuotas(::System::Xml::XmlDictionaryReaderQuotaTypes value);

  constexpr void __cordl_internal_set_readOnly(bool value);

  /// @brief Method .ctor, addr 0x5f07ab4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5f07be0, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(int32_t maxDepth, int32_t maxStringContentLength, int32_t maxArrayLength, int32_t maxBytesPerRead, int32_t maxNameTableCharCount,
                    ::System::Xml::XmlDictionaryReaderQuotaTypes modifiedQuotas);

  static inline ::System::Xml::XmlDictionaryReaderQuotas* getStaticF_defaultQuota();

  static inline ::System::Xml::XmlDictionaryReaderQuotas* getStaticF_maxQuota();

  /// @brief Method get_Max, addr 0x5f07c04, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlDictionaryReaderQuotas* get_Max();

  /// @brief Method get_MaxArrayLength, addr 0x5f07c88, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MaxArrayLength();

  /// @brief Method get_MaxBytesPerRead, addr 0x5f07c90, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MaxBytesPerRead();

  /// @brief Method get_MaxDepth, addr 0x5f07c98, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MaxDepth();

  /// @brief Method get_MaxNameTableCharCount, addr 0x5f07ca0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MaxNameTableCharCount();

  /// @brief Method get_MaxStringContentLength, addr 0x5f07c80, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MaxStringContentLength();

  static inline void setStaticF_defaultQuota(::System::Xml::XmlDictionaryReaderQuotas* value);

  static inline void setStaticF_maxQuota(::System::Xml::XmlDictionaryReaderQuotas* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlDictionaryReaderQuotas();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlDictionaryReaderQuotas", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlDictionaryReaderQuotas(XmlDictionaryReaderQuotas&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlDictionaryReaderQuotas", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlDictionaryReaderQuotas(XmlDictionaryReaderQuotas const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16939 };

  /// @brief Field readOnly, offset: 0x10, size: 0x1, def value: None
  bool ___readOnly;

  /// @brief Field maxStringContentLength, offset: 0x14, size: 0x4, def value: None
  int32_t ___maxStringContentLength;

  /// @brief Field maxArrayLength, offset: 0x18, size: 0x4, def value: None
  int32_t ___maxArrayLength;

  /// @brief Field maxDepth, offset: 0x1c, size: 0x4, def value: None
  int32_t ___maxDepth;

  /// @brief Field maxNameTableCharCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___maxNameTableCharCount;

  /// @brief Field maxBytesPerRead, offset: 0x24, size: 0x4, def value: None
  int32_t ___maxBytesPerRead;

  /// @brief Field modifiedQuotas, offset: 0x28, size: 0x4, def value: None
  ::System::Xml::XmlDictionaryReaderQuotaTypes ___modifiedQuotas;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlDictionaryReaderQuotas, ___readOnly) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDictionaryReaderQuotas, ___maxStringContentLength) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDictionaryReaderQuotas, ___maxArrayLength) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDictionaryReaderQuotas, ___maxDepth) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDictionaryReaderQuotas, ___maxNameTableCharCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDictionaryReaderQuotas, ___maxBytesPerRead) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDictionaryReaderQuotas, ___modifiedQuotas) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlDictionaryReaderQuotas, 0x30>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlDictionaryReaderQuotas);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlDictionaryReaderQuotas*, "System.Xml", "XmlDictionaryReaderQuotas");
