#pragma once
// IWYU pragma private; include "Oculus/Platform/IAP.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__IAP_def.hpp"
#include "Oculus/Platform/Models/zzzz__ProductList_def.hpp"
#include "Oculus/Platform/Models/zzzz__PurchaseList_def.hpp"
#include "Oculus/Platform/Models/zzzz__Purchase_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "Oculus/Platform/zzzz__Request_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::IAP.ConsumePurchase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request* (*)(::StringW)>(&::Oculus::Platform::IAP::ConsumePurchase)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5de7424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::IAP*>(), { "ConsumePurchase", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::IAP.GetProductsBySKU
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ProductList*>* (*)(::ArrayW<::StringW>)>(&::Oculus::Platform::IAP::GetProductsBySKU)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5de7578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::IAP*>(), { "GetProductsBySKU", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::IAP.GetViewerPurchases
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PurchaseList*>* (*)()>(&::Oculus::Platform::IAP::GetViewerPurchases)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5de76f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::IAP*>(), { "GetViewerPurchases", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::IAP.GetViewerPurchasesDurableCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PurchaseList*>* (*)()>(&::Oculus::Platform::IAP::GetViewerPurchasesDurableCache)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5de784c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::IAP*>(), { "GetViewerPurchasesDurableCache", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::IAP.LaunchCheckoutFlow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Purchase*>* (*)(::StringW)>(&::Oculus::Platform::IAP::LaunchCheckoutFlow)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5de79a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::IAP*>(), { "LaunchCheckoutFlow", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::IAP.GetNextProductListPage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ProductList*>* (*)(::Oculus::Platform::Models::ProductList*)>(
    &::Oculus::Platform::IAP::GetNextProductListPage)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5de7b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::IAP*>(), { "GetNextProductListPage", {}, { ::i2c::type_of<::Oculus::Platform::Models::ProductList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::IAP.GetNextPurchaseListPage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PurchaseList*>* (*)(::Oculus::Platform::Models::PurchaseList*)>(
    &::Oculus::Platform::IAP::GetNextPurchaseListPage)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5de7d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::IAP*>(), { "GetNextPurchaseListPage", {}, { ::i2c::type_of<::Oculus::Platform::Models::PurchaseList*>() } })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request* Oculus::Platform::IAP::ConsumePurchase(::StringW sku) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::IAP*>(), { "ConsumePurchase", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*>(nullptr, ___internal_method, sku);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ProductList*>* Oculus::Platform::IAP::GetProductsBySKU(::ArrayW<::StringW> skus) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::IAP*>(), { "GetProductsBySKU", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ProductList*>*>(nullptr, ___internal_method, skus);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PurchaseList*>* Oculus::Platform::IAP::GetViewerPurchases() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::IAP*>(), { "GetViewerPurchases", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PurchaseList*>*>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PurchaseList*>* Oculus::Platform::IAP::GetViewerPurchasesDurableCache() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::IAP*>(), { "GetViewerPurchasesDurableCache", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PurchaseList*>*>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Purchase*>* Oculus::Platform::IAP::LaunchCheckoutFlow(::StringW sku) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::IAP*>(), { "LaunchCheckoutFlow", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Purchase*>*>(nullptr, ___internal_method, sku);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ProductList*>* Oculus::Platform::IAP::GetNextProductListPage(::Oculus::Platform::Models::ProductList* list) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::IAP*>(), { "GetNextProductListPage", {}, { ::i2c::type_of<::Oculus::Platform::Models::ProductList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ProductList*>*>(nullptr, ___internal_method, list);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PurchaseList*>* Oculus::Platform::IAP::GetNextPurchaseListPage(::Oculus::Platform::Models::PurchaseList* list) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::IAP*>(), { "GetNextPurchaseListPage", {}, { ::i2c::type_of<::Oculus::Platform::Models::PurchaseList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PurchaseList*>*>(nullptr, ___internal_method, list);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::IAP::IAP() {}
